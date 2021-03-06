//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPUImageFramebuffer;

@protocol GPUImageInput <NSObject>
- (_Bool)enabled;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (void)setInputFramebuffer:(GPUImageFramebuffer *)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (_Bool)wantsMonochromeInput;
@end

