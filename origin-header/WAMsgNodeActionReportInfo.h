//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMutableArray, NSString;

@interface WAMsgNodeActionReportInfo : MMObject
{
    _Bool _bShouldLogAction;
    unsigned int _uiDebugMode;
    NSString *_statId;
    NSMutableArray *_actionList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actionList; // @synthesize actionList=_actionList;
@property(nonatomic) _Bool bShouldLogAction; // @synthesize bShouldLogAction=_bShouldLogAction;
@property(retain, nonatomic) NSString *statId; // @synthesize statId=_statId;
@property(nonatomic) unsigned int uiDebugMode; // @synthesize uiDebugMode=_uiDebugMode;

@end
