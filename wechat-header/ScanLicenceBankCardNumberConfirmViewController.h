//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMTableViewInfo, MMUILabel, NSString, ScanLicenceBankCardEditView, UIImage, UIImageView;
@protocol ScanLicenceBankCardNumberConfirmViewControllerDelegate;

@interface ScanLicenceBankCardNumberConfirmViewController : MMUIViewController <MMTableViewInfoDelegate, UIScrollViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool _didRenderViews;
    id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> _m_delegate;
    NSString *_cardNumStr;
    UIImage *_cardImage;
    ScanLicenceBankCardEditView *_editBankNumView;
    UIImageView *_cardImageView;
    MMUILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(copy, nonatomic) NSString *cardNumStr; // @synthesize cardNumStr=_cardNumStr;
- (void)confirmAction:(id)arg1;
@property(retain, nonatomic) ScanLicenceBankCardEditView *editBankNumView; // @synthesize editBankNumView=_editBankNumView;
- (id)getContainerView;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onCancel;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)setupViewsIfNeed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
