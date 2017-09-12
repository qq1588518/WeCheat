//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CommonPlayerDelegate;

@interface CommonPlayer : NSObject
{
    id <CommonPlayerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (double)duration;
- (_Bool)isPlaying;
@property(nonatomic) __weak id <CommonPlayerDelegate> m_delegate; // @synthesize m_delegate;
- (void)pause;
- (void)resume;
- (void)start;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

@end
