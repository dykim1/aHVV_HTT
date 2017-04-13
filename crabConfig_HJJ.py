if __name__ == '__main__':

# Usage : python crabConfig.py (to create jobs)
#         ./multicrab -c status -d <work area> (to check job status)

    from CRABAPI.RawCommand import crabCommand
    from CRABClient.ClientExceptions import ClientException
    from httplib import HTTPException

    from CRABClient.UserUtilities import config
    config = config()
    
    from multiprocessing import Process

    # Common configuration

    config.General.requestName = 'hjj_gen-sim_v5'
    config.General.workArea = 'hjj_GS'
    config.General.transferOutputs = True
    config.General.transferLogs = False
    
    config.JobType.pluginName = 'PrivateMC'
    
    config.Data.outputPrimaryDataset = 'hjj_gen-sim_v5'
    config.Data.splitting = 'EventBased'
    config.Data.unitsPerJob = 100
    NJOBS = 5000
    config.Data.totalUnits = config.Data.unitsPerJob * NJOBS
    config.Data.outLFNDirBase = '/store/group/lpcggntuples/aHVV_htt/HJJ_5M/GEN-SIM/'
    config.Data.publication = True
    
    config.Site.storageSite     = 'T3_US_FNALLPC'
    
    def submit(config):
        try:
            crabCommand('submit', config = config)
        except HTTPException, hte:
            print hte.headers

    # dataset dependent configuration

    config.General.requestName = 'hjj_gen_sim_sm'
    config.JobType.psetName = 'GS_forHJJ_mjj200_sm_15980.py'
    config.JobType.outputFiles = ['GluGluH2JetsToTauTau_M125_13TeV_CPmixing_sm_JHU_0.root']
    config.Data.outputDatasetTag   = 'HJJMJJ200_SM'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'hjj_gen_sim_ps'
    config.JobType.psetName = 'GS_forHJJ_mjj200_ps_15981.py'
    config.JobType.outputFiles = ['GluGluH2JetsToTauTau_M125_13TeV_CPmixing_ps_JHU_0.root']
    config.Data.outputDatasetTag   = 'HJJMJJ200_PS'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'hjj_gen_sim_mix'
    config.JobType.psetName = 'GS_forHJJ_mjj200_mix_15982.py'
    config.JobType.outputFiles = ['GluGluH2JetsToTauTau_M125_13TeV_CPmixing_mix_JHU_0.root']
    config.Data.outputDatasetTag   = 'HJJMJJ200_MIX'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()



