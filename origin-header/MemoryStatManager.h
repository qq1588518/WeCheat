//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INewABTestMgrExt-Protocol.h"

@class MemoryRecordInfo, MemoryStatConfig, MemoryStatReporter, NSString;

@interface MemoryStatManager : NSObject <INewABTestMgrExt>
{
    NSString *m_rootDir;
    NSString *m_dataDir;
    NSString *m_configPath;
    MemoryStatConfig *m_config;
    MemoryRecordInfo *m_currRecord;
    MemoryRecordInfo *m_uploadRecord;
    unsigned long long m_userType;
    _Bool m_isStartTracking;
    MemoryStatReporter *m_reporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)checkABTest:(_Bool)arg1;
- (void)checkAndRecord;
- (_Bool)checkDataValid;
- (_Bool)checkDeviceSatisfied;
- (void)clearUnnecessaryData;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)handleDidEnterBackgroundNotification:(id)arg1;
- (void)handleWillEnterForegroundNotification:(id)arg1;
- (id)init;
- (_Bool)isMemoryStatEnabled;
- (void)loadConfig;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onSignalCrash;
- (id)recordList;
- (void)removeAllFullReport;
- (void)saveConfig;
- (void)setMemoryStatEnabled:(_Bool)arg1;
- (_Bool)shouldEnterUploadReport;
- (void)startTracking;
- (void)uploadAllFullReport;
- (void)uploadLog;
- (void)uploadReport:(id)arg1;

@end

