//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "FavFullScreenImageViewDelegate-Protocol.h"
#import "FavImagePreViewDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavForwardLogicController, ForwardMessageLogicController, NSString, ScanQRCodeLogicController, WCActionSheet;

@interface FavMultiImageDetailViewController : FavBaseDetailViewController <BaseScanLogicDelegate, WCActionSheetDelegate, IFavoritesExt, FavFullScreenImageViewDelegate, ForwardMessageLogicDelegate, FavImagePreViewDelegate, FavForwardLogicDelegate>
{
    FavForwardLogicController *m_favForwardController;
    unsigned int m_uiLongPressedIndex;
    _Bool m_hasIllegalData;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *m_favImgLongPressAction;
    ForwardMessageLogicController *m_forwardMsgLogic;
}

- (void).cxx_destruct;
- (void)OnDownloadFavoritesItemOK:(id)arg1 LocalDataId:(id)arg2;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (id)getCurrentViewController;
- (id)getFavForawrdViewController;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (id)initWithFavItem:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onClickFavPreImage:(id)arg1 ImageIndex:(unsigned int)arg2;
- (void)onFavFullScreenImageViewHide;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2WC;
- (void)onLongPressedFavPreImage:(id)arg1;
- (void)onSaveFavDataImg;
- (void)onScanEnds;
- (void)onWillLongPressFavPreImage:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

