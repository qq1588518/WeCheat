//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ChatRoomInfoSettingMgr : NSObject
{
    NSMutableDictionary *m_dicInfoSetting;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)load;
- (_Bool)needToShowDisplayNameTip:(id)arg1;
- (_Bool)needToShowPushMsgTip:(id)arg1;
- (void)save;
- (void)setHasShowDisplayNameTip:(id)arg1;
- (void)setHasShowPushMsgTip:(id)arg1;

@end

