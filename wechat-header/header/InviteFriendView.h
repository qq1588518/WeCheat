//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IMMQRCodeExt-Protocol.h"

@class NSString, UIActivityIndicatorView, UIImageView, UITextView;
@protocol InviteFriendViewDelegate;

@interface InviteFriendView : MMUIView <IMMQRCodeExt>
{
    UIImageView *m_imageQRView;
    UIActivityIndicatorView *m_loadingView;
    UITextView *m_textView;
    id <InviteFriendViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4 showQRImage:(_Bool)arg5;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void)onLeft;
- (void)onRight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
