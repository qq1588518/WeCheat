//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QBBeaconDataPersistQueue : NSObject
{
    NSMutableArray *tailList;
    int maxSize;
    int currSize;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addToTailList:(id)arg1;
- (void)dealloc;
- (id)fetchAllObjectsAndClean;
- (int)getCurrSize;
- (int)getMaxSize;
- (id)init;
- (void)setMaxSize:(int)arg1;

@end
