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

    config.General.requestName = 'vbf_digi_reco_v5'
    config.General.workArea = 'vbf_DR'
    config.General.transferOutputs = True
    config.General.transferLogs = False
    
    config.JobType.pluginName = 'Analysis'
    config.JobType.psetName = 'DIGI-RECO_1_cfg.py'
    config.JobType.numCores = 4
    config.JobType.maxMemoryMB = 4000
    
    config.Data.inputDBS = 'phys03'
    config.Data.splitting = 'FileBased'
    config.Data.unitsPerJob = 1
    config.Data.outLFNDirBase = '/store/group/lpcggntuples/aHVV_htt/VBF_5M/DIGI-RECO/'
    config.Data.publication = True
    
    config.Site.storageSite     = 'T3_US_FNALLPC'
    
    def submit(config):
        try:
            crabCommand('submit', config = config)
        except HTTPException, hte:
            print hte.headers

    # dataset dependent configuration

    config.General.requestName = 'vbf_digi_reco_0PM'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0PH-244b40a6c648ab709bb9c2c2f7d5712d/USER'
    config.Data.outputDatasetTag   = 'VBFHiggs0PM'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0M'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0M-244b40a6c648ab709bb9c2c2f7d5712d/USER'
    config.Data.outputDatasetTag   = 'VBFHiggs0M'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0L1'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0L1-244b40a6c648ab709bb9c2c2f7d5712d/USER'
    config.Data.outputDatasetTag   = 'VBFHiggs0L1'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0PH'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0PH-244b40a6c648ab709bb9c2c2f7d5712d/USER'    
    config.Data.outputDatasetTag   = 'VBFHiggs0PH'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0PHf05ph0'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0PHf05ph0-244b40a6c648ab709bb9c2c2f7d5712d/USER'    
    config.Data.outputDatasetTag   = 'VBFHiggs0PHf05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0L1f05ph0'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0L1f05ph0-244b40a6c648ab709bb9c2c2f7d5712d/USER'    
    config.Data.outputDatasetTag   = 'VBFHiggs0L1f05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()

    config.General.requestName = 'vbf_digi_reco_0Mf05ph0'
    config.Data.inputDataset = '/VBFHiggs0_JHUgen_v5/lovedeep-VBFHiggs0Mf05ph0-244b40a6c648ab709bb9c2c2f7d5712d/USER'    
    config.Data.outputDatasetTag   = 'VBFHiggs0Mf05ph0'
    p = Process(target=submit, args=(config,))
    p.start()
    p.join()


