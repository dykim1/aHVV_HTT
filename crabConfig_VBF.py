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

    config.General.requestName = 'vbf_gen-sim_v5'
    config.General.workArea = 'vbf_GS_v4'
    config.General.transferOutputs = True
    config.General.transferLogs = False
    
    config.JobType.pluginName = 'PrivateMC'
    
    
    config.Data.outputPrimaryDataset = 'VBFHiggs0_JHUgen_v5'
    config.Data.splitting = 'EventBased'
    config.Data.unitsPerJob = 100
    NJOBS = 3000
    config.Data.totalUnits = config.Data.unitsPerJob * NJOBS
    config.Data.outLFNDirBase = '/store/group/lpcggntuples/aHVV_htt/VBF_15M/GEN-SIM/'
    config.Data.publication = True
    
    config.Site.storageSite     = 'T3_US_FNALLPC'
    #config.Data.ignoreLocality = True

   # config.Site.whitelist = ["T2_US*"]
#    config.Site.whitelist      = ['T3_US_FNALLPC']

    def submit(config):
        try:
            crabCommand('submit', config = config)
        except HTTPException, hte:
            print hte.headers

    # dataset dependent configuration

    config.General.requestName = 'vbf_gen_sim_0PM'
    config.JobType.psetName = 'GS_forVBFHiggs0PM_16234.py'
    config.JobType.outputFiles = ['VBFHiggs0PM_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0PM'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0M'
    config.JobType.psetName = 'GS_forVBFHiggs0M_16229.py'
    config.JobType.outputFiles = ['VBFHiggs0M_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0M'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0L1'
    config.JobType.psetName = 'GS_forVBFHiggs0L1_16231.py'
    config.JobType.outputFiles = ['VBFHiggs0L1_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0L1'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0PH'
    config.JobType.psetName = 'GS_forVBFHiggs0PH_16232.py'
    config.JobType.outputFiles = ['VBFHiggs0PH_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0PH'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0PHf05ph0'
    config.JobType.psetName = 'GS_forVBFHiggs0PHf05ph0_16230.py'
    config.JobType.outputFiles = ['VBFHiggs0PHf05ph0_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0PHf05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0L1f05ph0'
    config.JobType.psetName = 'GS_forVBFHiggs0L1f05ph0_16233.py'
    config.JobType.outputFiles = ['VBFHiggs0L1f05ph0_M-125_13TeV-JHUGenV6_0-4.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0L1f05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_gen_sim_0Mf05ph0'
    config.JobType.psetName = 'GS_forVBFHiggs0Mf05ph0_16235.py'
    config.JobType.outputFiles = ['VBFHiggs0Mf05ph0_M-125_13TeV-JHUGenV6_0.root']
    config.Data.outputDatasetTag   = 'VBFHiggs0Mf05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()


