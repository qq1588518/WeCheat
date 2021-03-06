//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMGridViewCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMGridViewCell, NSArray, NSMutableSet, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;
@protocol MMGridViewActionDelegate, MMGridViewDataSource, MMGridViewLayoutStrategy, MMGridViewSortingDelegate, MMGridViewTransformationDelegate;

@interface MMGridView : MMUIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate, MMGridViewCellDelegate>
{
    UIPanGestureRecognizer *_sortingPanGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UITapGestureRecognizer *_tapGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UIPanGestureRecognizer *_panGesture;
    long long _numberTotalItems;
    struct CGSize _itemSize;
    NSMutableSet *_reusableCells;
    MMGridViewCell *_sortMovingItem;
    long long _sortFuturePosition;
    _Bool _autoScrollActive;
    struct CGPoint _minPossibleContentOffset;
    struct CGPoint _maxPossibleContentOffset;
    MMGridViewCell *_transformingItem;
    double _lastRotation;
    double _lastScale;
    _Bool _inFullSizeMode;
    _Bool _inTransformingState;
    _Bool _rotationActive;
    int m_moveState;
    id <MMGridViewDataSource> m_dataSource;
    id <MMGridViewActionDelegate> m_actionDelegate;
    id <MMGridViewSortingDelegate> m_sortingDelegate;
    id <MMGridViewTransformationDelegate> m_transformDelegate;
    id <MMGridViewLayoutStrategy> m_layoutStrategy;
    UIView *_mainSuperView;
    long long _itemSpacingH;
    long long _itemSpacingV;
    _Bool _centerGridH;
    struct UIEdgeInsets _minEdgeInsets;
    _Bool _editing;
    _Bool _itemsSubviewsCacheIsValid;
    long long _firstPositionLoaded;
    long long _lastPositionLoaded;
    double cellResponseOffset;
    _Bool showFullSizeViewWithAlphaWhenTransforming;
    _Bool enableEditOnLongPress;
    _Bool disableEditOnEmptySpaceTap;
    int _style;
    double minimumPressDuration;
    NSArray *itemSubviewsCache;
}

- (void).cxx_destruct;
- (void)applyWithoutAnimation:(CDUnknownBlockType)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
@property(nonatomic) double cellResponseOffset; // @synthesize cellResponseOffset;
@property(nonatomic) _Bool centerGridH; // @synthesize centerGridH=_centerGridH;
- (void)cleanupUnseenItems;
- (void)commonInit;
- (void)contentOffset:(struct CGPoint)arg1;
- (void)dealloc;
- (void)deleteCell:(long long)arg1;
- (id)dequeueReusableCell;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
@property(nonatomic) _Bool disableEditOnEmptySpaceTap; // @synthesize disableEditOnEmptySpaceTap;
@property(nonatomic) _Bool enableEditOnLongPress; // @synthesize enableEditOnLongPress;
@property(nonatomic) long long firstPositionLoaded; // @synthesize firstPositionLoaded=_firstPositionLoaded;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getLongPressGestureRecognizer;
- (id)getPanGestureRecognizer;
- (id)getPinchGestureRecognizer;
- (id)getRotationGestureRecognizer;
- (id)getScrollViewPanGestureRecognizer;
- (id)getSortPanGestureRecognizer;
- (id)getTapGestureRecognizer;
- (void)gotoPage:(unsigned int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)insertObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (_Bool)isInTransformingState;
@property(nonatomic) long long itemSpacingH; // @synthesize itemSpacingH=_itemSpacingH;
@property(nonatomic) long long itemSpacingV; // @synthesize itemSpacingV=_itemSpacingV;
- (id)itemSubViewForPosition:(long long)arg1;
- (id)itemSubviews;
@property(retain, nonatomic) NSArray *itemSubviewsCache; // @synthesize itemSubviewsCache;
@property(readonly, nonatomic) _Bool itemsSubviewsCacheIsValid; // @synthesize itemsSubviewsCacheIsValid=_itemsSubviewsCacheIsValid;
@property(nonatomic) long long lastPositionLoaded; // @synthesize lastPositionLoaded=_lastPositionLoaded;
- (void)layoutSubviews;
- (void)layoutSubviewsWithAnimation:(int)arg1;
- (void)loadRequiredItems;
- (void)longPressGestureUpdated:(id)arg1;
@property int m_moveState; // @synthesize m_moveState;
@property(nonatomic) __weak UIView *mainSuperView; // @synthesize mainSuperView=_mainSuperView;
@property(nonatomic) struct UIEdgeInsets minEdgeInsets; // @synthesize minEdgeInsets=_minEdgeInsets;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration;
- (void)onDeleteCell:(long long)arg1;
- (void)panGestureUpdated:(id)arg1;
- (void)pinchGestureUpdated:(id)arg1;
- (long long)positionForItemSubview:(id)arg1;
- (void)queueReusableCell:(id)arg1;
- (void)receivedMemoryWarningNotification:(id)arg1;
- (void)receivedWillRotateNotification:(id)arg1;
- (void)recomputeSizeAnimated:(_Bool)arg1;
- (struct CGRect)rectForPoint:(struct CGPoint)arg1 inPaggingMode:(_Bool)arg2;
- (void)relayoutItemsAnimated:(_Bool)arg1;
- (void)relayoutItemsAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)reloadData;
- (void)reloadObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)removeObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)removeObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)rotationGestureUpdated:(id)arg1;
- (void)scrollToObjectAtIndex:(long long)arg1 atScrollPosition:(int)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) __weak UIScrollView *scrollView;
- (void)setActionDelegate:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLayoutStrategy:(id)arg1;
@property(nonatomic) _Bool showFullSizeViewWithAlphaWhenTransforming; // @synthesize showFullSizeViewWithAlphaWhenTransforming;
- (void)setSortingDelegate:(id)arg1;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)setSubviewsCacheAsInvalid;
- (void)setTransformDelegate:(id)arg1;
- (_Bool)shouldActAtPoint:(struct CGPoint)arg1;
- (void)sortingAutoScrollMovementCheck;
- (void)sortingMoveDidContinueToPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStartAtPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStopAtPoint:(struct CGPoint)arg1;
- (void)sortingPanGestureUpdated:(id)arg1;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 withAnimation:(int)arg3;
- (void)tapGestureUpdated:(id)arg1;
- (void)transformingGestureDidBeginWithGesture:(id)arg1;
- (void)transformingGestureDidFinish;
- (void)updateBasicSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

