//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLSDataItem : NSObject
{
    int fileType;
    unsigned int fileTime;
    unsigned int mesLocalId;
    unsigned long long fileSize;
    NSString *filePath;
    NSString *session;
    NSString *userName;
}

+ (_Bool)dataItemCompareItem:(id)arg1 withItem:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) unsigned int fileTime; // @synthesize fileTime;
@property(nonatomic) int fileType; // @synthesize fileType;
- (id)init;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
@property(retain, nonatomic) NSString *session; // @synthesize session;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end

