//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray;
@protocol UploadSearchVoiceMgrDelegate;

@interface UploadSearchVoiceMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _searchType;
    unsigned int _curVoiceId;
    _Bool _isUploading;
    _Bool _isEnd;
    NSMutableArray *_uploadQueue;
    id <UploadSearchVoiceMgrDelegate> delegate;
    MMTimer *checkUploadQueueTimer;
}

- (void).cxx_destruct;
- (void)AddNewPart:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)MainUpdateQueue:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)Start:(unsigned int)arg1 SearchType:(unsigned int)arg2;
- (void)Stop;
- (void)checkUploadQueue;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
- (void)clearTempFile;
- (void)dealloc;
@property(nonatomic) __weak id <UploadSearchVoiceMgrDelegate> delegate; // @synthesize delegate;
- (void)doUpload:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (id)init;
- (void)stopUploadTask;
- (void)stopUploadTaskWithErr:(int)arg1;

@end

