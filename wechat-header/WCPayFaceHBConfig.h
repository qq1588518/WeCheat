//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayFaceHBConfig : NSObject <PBCoding>
{
    unsigned int resourceVersion;
    unsigned int uiTotalCount;
    unsigned long long uiTotalMount;
}

+ (void)initialize;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion;
@property(nonatomic) unsigned int uiTotalCount; // @synthesize uiTotalCount;
@property(nonatomic) unsigned long long uiTotalMount; // @synthesize uiTotalMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
