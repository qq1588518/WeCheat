//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@class JSEvent;

@interface WebviewJSEventHandler_openEmoticonTopicList : WebviewJSEventHandlerBase
{
    JSEvent *m_event;
}

+ (id)dictionForBannerSet:(id)arg1;
- (void).cxx_destruct;
- (void)endWithFail;
- (void)endWithOk;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (_Bool)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 extrance:(long long)arg3;
- (id)viewControllerWithParams:(id)arg1 extrance:(long long)arg2;

@end

