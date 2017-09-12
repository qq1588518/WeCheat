//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "IAudioPlayerDelegate-Protocol.h"

@class NSString, WAAudioPlayer;

@interface WAWebViewPlugin_playAudio : WAWebViewPluginBase <IAudioPlayerDelegate>
{
    WAAudioPlayer *_player;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
- (void)onAudioEnd;
- (void)onAudioPause;
- (void)onAudioPlay;
- (void)onAudioUpdate:(CDStruct_1b6d18a9)arg1 total:(CDStruct_1b6d18a9)arg2;
- (void)pauseAudio;
- (void)playAudio:(id)arg1;
@property(retain, nonatomic) WAAudioPlayer *player; // @synthesize player=_player;
- (void)resumeAudio;
- (void)stopAudio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
