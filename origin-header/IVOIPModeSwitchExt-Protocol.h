//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol IVOIPModeSwitchExt

@optional
- (void)OnBothEarMode;
- (void)OnBothVideoMode;
- (void)OnFromLocalVideoToBothVideo;
- (void)OnFromRemoteVideoToBothVideo;
- (void)OnLocalEarMode;
- (void)OnLocalEarModeFor2G;
- (void)OnLocalVideoMode;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayLocalEarModeFor2G;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayRemoteEarModeFor2G;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayRemoteVideoMode;
- (void)OnRemoteEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnRemoteVideoMode;
- (void)OnVideoModeChangeToVoiceMode;
@end
