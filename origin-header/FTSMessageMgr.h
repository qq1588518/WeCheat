//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IAsyncTaskProtocol-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class AsyncTaskQueueEngine, FTSDB, FTSMessageDB, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface FTSMessageMgr : NSObject <IAsyncTaskProtocol, IMsgExt, IMMNewSessionMgrExt, WXGImportMessageNotification>
{
    FTSMessageDB *_ftsMessageDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    FTSDB *_ftsDB;
    NSRecursiveLock *_lock;
    _Bool _hasInitTask;
    _Bool _hasForegroundTask;
    _Bool _hasBackgroundTask;
    NSMutableArray *_arrHomePageLastQueryKeywords;
    NSString *_lastHomePageQueryText;
    NSString *_newestHomePageQueryText;
    _Bool _hasSearchDoneForHomePage;
    NSMutableArray *_arrMsgItemForHomePage;
    NSMutableArray *_arrSessionUserForHomePage;
    NSMutableDictionary *_dicSesssionArrMsgItemForHomePage;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    NSString *_lastDetailPageQueryText;
    NSString *_newestDetailPageQueryText;
    _Bool _hasSearchDoneForDetailPage;
    NSMutableArray *_arrMsgItemForDetailPage;
    NSMutableArray *_arrSessionUserForDetailPage;
    NSMutableDictionary *_dicSesssionArrMsgItemForDetailPage;
    NSMutableArray *_arrSessionUser;
    NSMutableDictionary *_dicLatestSession;
    _Bool _hasNewMessage;
    _Bool _needMonitorReport;
    _Bool _hasIndexMessageResult;
    _Bool _hasMemoryMessageResult;
    _Bool _enableTimerTask;
    _Bool _isTimerTasking;
    NSRecursiveLock *_indexMemCacheLock;
    NSRecursiveLock *_indexTaskLock;
    _Bool _bStopCacheMsg;
    NSMutableDictionary *_dicUnIndexMsgCache;
    _Bool _bShouldReloadUpdatedSession;
    NSMutableSet *_setUpdatedSession;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)aggregateMsgItemForDetailPage;
- (void)aggregateMsgItemForHomePage;
@property(retain, nonatomic) NSArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSArray *arrHomePageLastQueryKeywords; // @synthesize arrHomePageLastQueryKeywords=_arrHomePageLastQueryKeywords;
@property(retain, nonatomic) NSMutableArray *arrSessionUser; // @synthesize arrSessionUser=_arrSessionUser;
- (void)asyncMonitorReport;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (unsigned int)calAllMemMsgCount;
- (void)cancelSearchForDetailPage;
- (void)cancelSearchForHomePage;
- (void)clearIndexMemCache;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicLatestSession; // @synthesize dicLatestSession=_dicLatestSession;
- (void)doIndexIfNeeded;
- (void)enableIndexMemCache:(_Bool)arg1;
- (void)enableTimerTask:(_Bool)arg1;
- (void)excuteBackgroundTask;
- (void)excuteForegroundTask;
- (void)excuteInitTask;
- (void)excuteTimerTask;
- (unsigned int)getIndexNotReadyCount:(id)arg1;
- (unsigned long long)getMsgItemsCountForDetailPage:(id)arg1;
- (unsigned long long)getMsgItemsCountForHomePage:(id)arg1;
- (id)getSessionMsgItemsForDetailPage:(id)arg1 index:(unsigned long long)arg2;
- (id)getSessionMsgItemsForHomePage:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)getSessionUserCountForHomePage:(id)arg1;
- (id)getSessionUsersForDetailPage:(id)arg1;
- (_Bool)hasBackgroundTask;
- (_Bool)hasCreateAllIndex:(id)arg1;
- (_Bool)hasForegroundTask;
- (_Bool)hasIndexMessageResultForHomePage:(id)arg1;
- (_Bool)hasInitTask;
- (_Bool)hasMemoryMessageResultForHomePage:(id)arg1;
- (_Bool)hasSearchDoneForDetailPage:(id)arg1;
- (_Bool)hasSearchDoneForHomePage:(id)arg1;
- (_Bool)hasSearchResultForHomePage:(id)arg1;
- (_Bool)hasTimerTask;
- (id)init;
- (void)initDB:(id)arg1 lock:(id)arg2 asyncTaskQueueEngine:(id)arg3;
- (_Bool)isFtsIndexTargetMsg:(id)arg1;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *lastHomePageQueryText; // @synthesize lastHomePageQueryText=_lastHomePageQueryText;
- (id)memSearch:(id)arg1 limit:(unsigned int)arg2 searchAll:(_Bool *)arg3;
- (void)memSearchLog:(id)arg1 searchDone:(_Bool)arg2 isComplete:(_Bool)arg3;
@property(nonatomic) _Bool needMonitorReport; // @synthesize needMonitorReport=_needMonitorReport;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(retain, nonatomic) NSString *newestHomePageQueryText; // @synthesize newestHomePageQueryText=_newestHomePageQueryText;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onEnterBackground;
- (void)onImportMessageSuccess;
- (void)onNeedReload;
- (void)onPreRecoverFTSDB;
- (void)onReceiveMemoryWarning;
- (void)onRecoverFTSDB;
- (void)reloadDB;
- (void)removeUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (void)resetCache;
- (void)searchCompletelyForDetailPage:(id)arg1;
- (void)searchCompletelyForHomePage:(id)arg1;
- (void)setNeedsInitTask;
- (_Bool)shouldCacheMsg:(id)arg1;
- (void)tryWakeUpTimerTask;
- (void)updateIndexTaskState;
- (void)updateLatestSession;
- (void)wakeUpForegroundTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

