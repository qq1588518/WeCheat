//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FavImageFullScreenViewContainerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCPayControlMgrExt-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class ForwardMessageLogicController, MMScrollView, NSMutableArray, NSString, ScanQRCodeLogicController, SimpleImgInfo, UIPageControl, UIView, WCActionSheet;

@interface FavFullScreenImageViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, FavImageFullScreenViewContainerDelegate, WCCommitViewResultDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, WCPayControlMgrExt>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    _Bool m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSMutableArray *m_arrFavData;
    NSMutableArray *m_arrImage;
    unsigned int m_iCurIndex;
    unsigned int m_firstIndex;
    _Bool m_isRotating;
    long long m_lastDeviceOrientation;
    _Bool m_isAnimationShowing;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *m_actionSheet;
    SimpleImgInfo *m_forwardDataSrc;
    ForwardMessageLogicController *m_forwardMsgLogic;
    _Bool _m_canSelect;
}

- (void).cxx_destruct;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)animationHideStop;
- (void)animationHideWithRotate;
- (void)animationShowWithRecordData:(id)arg1 originRect:(struct CGRect)arg2 index:(unsigned int)arg3;
- (void)captureScreen;
- (void)clearStatus;
- (void)dealloc;
- (void)downloadImage;
- (id)getCurrentViewController;
- (id)getVisibleViewController;
- (id)imageForScanQRCodeAtPage:(id)arg1;
@property(nonatomic) _Bool m_canSelect; // @synthesize m_canSelect=_m_canSelect;
@property(nonatomic) unsigned int m_iCurIndex; // @synthesize m_iCurIndex;
- (void)onAnimateFadeOut;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onForward2MsgRecordData;
- (void)onForward2WCRecordData;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)onMemoryWarning;
- (void)onScanCodeFinish;
- (void)onScanEnds;
- (void)onStopLoading;
- (void)onWillLongPress:(id)arg1 onImage:(id)arg2;
- (void)resetScrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldAnimationWhenHide;
- (void)shouldHideFullScreenForWCPay;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useAlphaAnimation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
