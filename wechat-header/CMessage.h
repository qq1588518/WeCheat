//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, ProtobufCGIWrap;
@protocol NotifyFromMainCtrlDelegate;

@interface CMessage : NSObject
{
    unsigned int m_uiMessage;
    unsigned int m_uiEventID;
    NSDictionary *m_dicMessageInfo;
    ProtobufCGIWrap *m_pbCGIWrap;
    _Bool m_bNotify;
    id <NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) _Bool m_bNotify; // @synthesize m_bNotify;
@property(nonatomic) __weak id <NotifyFromMainCtrlDelegate> m_delNotifyToEventOwner; // @synthesize m_delNotifyToEventOwner;
@property(retain, nonatomic) NSDictionary *m_dicMessageInfo; // @synthesize m_dicMessageInfo;
@property(retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiMessage; // @synthesize m_uiMessage;

@end
