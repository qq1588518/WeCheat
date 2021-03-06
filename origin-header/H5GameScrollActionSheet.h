//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton;
@protocol H5GameScrollActionSheetDelegate;

@interface H5GameScrollActionSheet : UIView <UIScrollViewDelegate>
{
    unsigned long long _columnOrRowCount;
    NSArray *_dataAry;
    UIView *_containerView;
    UIButton *_transparentBgBtn;
    long long _lastOrientation;
    _Bool _isLandScape;
    _Bool _bOrientationLocked;
    id <H5GameScrollActionSheetDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <H5GameScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRotate:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (id)getMenuButton:(id)arg1;
- (id)initWithItems:(id)arg1 OrientatioinLocked:(_Bool)arg2;
- (_Bool)isSupportVisualEffect;
- (void)onEmptyPlaceTap:(id)arg1;
- (void)onMenuButtonClicked:(id)arg1;
- (void)setupColorfulBar;
- (void)setupContainerView;
- (void)setupScrollViewLanscape;
- (void)setupScrollViewPortrait;
- (void)setupScrollViews;
- (void)setupTransparentView;
- (void)showInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

