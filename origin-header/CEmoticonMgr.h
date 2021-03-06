//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "EmoticonDescMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMResPackageMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class CEmoticonDB, NSMutableArray, NSRecursiveLock, NSString;

@interface CEmoticonMgr : MMService <IMMLanguageMgrExt, MMService, MMResPackageMgrExt, EmoticonDescMgrExt, MMConfigMgrExt>
{
    CEmoticonDB *m_oEmoticonDB;
    NSRecursiveLock *m_oLock;
    NSMutableArray *m_needRemoveEmoticons;
    int _fileMigrationFinishStatus;
}

+ (unsigned int)CustomEmoticonLimit;
+ (id)GetEmoticonByMD5:(id)arg1;
+ (_Bool)IsEmoticonImageExist:(id)arg1;
+ (void)ReportAddEmoticonWithAddEmoticonWrap:(id)arg1 failedReason:(id)arg2;
+ (id)emoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2 errorMsg:(id *)arg3;
+ (id)emoticonMsgForImageData:(id)arg1 errorMsg:(id *)arg2;
+ (id)errorMsgForEmoticonImageData:(id)arg1;
+ (id)genEmoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2;
+ (id)genSafeEmoticonImage:(id)arg1;
+ (id)getEmoticonImageByMD5:(id)arg1;
+ (id)getEmoticonImageForEditByMD5:(id)arg1 isStore:(_Bool)arg2;
+ (unsigned int)getIdKeyIdEmoticon;
+ (unsigned int)getIdKeyResolutionLimit;
+ (_Bool)isTusijiEmoticonMD5:(id)arg1;
+ (void)notifyEmoticonListUpdated;
- (void).cxx_destruct;
- (id)AddCustomEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 isSilently:(_Bool)arg3;
- (id)AddEmoticon:(id)arg1 Type:(unsigned int)arg2 ExtInfo:(id)arg3 Source:(long long)arg4;
- (_Bool)AddEmoticonSilently:(id)arg1 Type:(unsigned int)arg2 packageId:(id)arg3 Source:(long long)arg4 Index:(unsigned int)arg5;
- (id)AddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 extFlag:(unsigned int)arg3 index:(id)arg4 isSilently:(_Bool)arg5;
- (void)AddHardCode:(id)arg1 Type:(unsigned int)arg2 GameType:(unsigned int)arg3 OriginPath:(id)arg4 packageId:(id)arg5;
- (_Bool)CheckEmoticonExist:(id)arg1;
- (_Bool)CheckEmoticonExistInCustomListByMd5:(id)arg1;
- (void)CopyPic:(id)arg1 From:(id)arg2;
- (void)DeleteEmoticonByListMD5:(id)arg1;
- (_Bool)DeleteEmoticonFromCustomListByMd5:(id)arg1;
- (id)GetEmoticonList;
- (void)InitEmoticonMgr:(id)arg1 Lock:(id)arg2;
- (void)InitLocalList;
- (_Bool)IsCanDelete:(id)arg1;
- (_Bool)IsJsbOrDiceEmoticonMd5:(id)arg1;
- (id)checkAndSaveEmoticon:(id)arg1 addEmotionWrap:(id)arg2;
- (void)configWxAMEnableSetting;
- (void)dealloc;
- (_Bool)deleteEmoticonByPid:(id)arg1 isSilently:(_Bool)arg2 needRemoveFile:(_Bool)arg3;
- (void)downloadTusijiResInMainThread;
@property(nonatomic) int fileMigrationFinishStatus; // @synthesize fileMigrationFinishStatus=_fileMigrationFinishStatus;
- (id)getCustomEmoticonListWithOutGame;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (void)hardcodeTusiji;
- (id)init;
- (id)lastestSentMd5InMd5list:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_needRemoveEmoticons; // @synthesize m_needRemoveEmoticons;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
- (void)onLanguageChange;
- (void)onMMDynamicConfigUpdated;
- (void)onResPackageReady:(id)arg1;
- (void)onServiceInit;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)setFileMigrationFinishByBit:(int)arg1;
- (_Bool)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (_Bool)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (id)updatedEmoticonArrayForGame:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

