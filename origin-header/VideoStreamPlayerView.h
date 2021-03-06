//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SightPlayerView.h"

#import "VideoStreamPlayerViewModeDelegate-Protocol.h"

@class NSArray, NSObject, NSString, VideoStreamInfo, VideoStreamKVReportLogic, VideoStreamPlayerViewModel;
@protocol NSObject><AVPlayerStateControlDelegate;

@interface VideoStreamPlayerView : SightPlayerView <VideoStreamPlayerViewModeDelegate>
{
    NSObject *m_oPlaybackTimeObserver;
    _Bool m_bBuffering;
    NSArray *m_arrBufferTimes;
    _Bool m_bForcePause;
    unsigned long long m_uLastBufferTime;
    _Bool shouldResetPlayerToLocalPlay;
    float _m_uiCurrentPlayedSec;
    VideoStreamKVReportLogic *m_oKVReportLogic;
    VideoStreamInfo *m_oVideoInfo;
    VideoStreamPlayerViewModel *_m_oPlayViewModel;
    id <NSObject><AVPlayerStateControlDelegate> _controlDelegate;
}

- (void).cxx_destruct;
- (void)OnVideoDownloadErrorExpired:(_Bool)arg1;
- (void)ShouldUpdateThumbImage:(id)arg1;
- (id)buildAVItem;
- (void)calculateDataBufferState;
- (void)checkPlayerState;
- (void)clearPlayer;
@property(nonatomic) __weak id <NSObject><AVPlayerStateControlDelegate> controlDelegate; // @synthesize controlDelegate=_controlDelegate;
- (void)dealloc;
- (id)getAVPlayer;
- (id)getAVPlayerItem;
- (double)getVideoBufferedTime;
- (double)getVideoCurrentSeconde;
- (void)initPlayer;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) VideoStreamKVReportLogic *m_oKVReportLogic; // @synthesize m_oKVReportLogic;
@property(retain, nonatomic) VideoStreamPlayerViewModel *m_oPlayViewModel; // @synthesize m_oPlayViewModel=_m_oPlayViewModel;
@property(retain, nonatomic) VideoStreamInfo *m_oVideoInfo; // @synthesize m_oVideoInfo;
@property(nonatomic) float m_uiCurrentPlayedSec; // @synthesize m_uiCurrentPlayedSec=_m_uiCurrentPlayedSec;
- (void)monitoringPlayback:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onVideoDownloadModeChange:(unsigned long long)arg1;
- (void)pauseForce:(_Bool)arg1;
- (void)playToEnd:(id)arg1;
- (void)reportKVArgs:(struct C2CDownloadResult)arg1;
- (void)resetPlayerToLocalPlay;
- (void)seekTo:(float)arg1;
- (void)setBufferState:(_Bool)arg1;
- (void)startBuffering;
- (unsigned long long)startDownloadVideo;
- (void)startPlayer;
- (void)tryToBeginPlayVideo;
- (void)tryToPauseAndStartLoading;
- (void)tryToPlayAndStopLoading;
- (void)updateVideoArgs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

