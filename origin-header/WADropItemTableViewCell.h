//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel, UIView;
@protocol WADropItemTableViewCellDelegate;

@interface WADropItemTableViewCell : UITableViewCell
{
    UIButton *_closeBtn;
    UIButton *_backBtn;
    UILabel *_titleView;
    UILabel *_contentView;
    UIView *_splitLine;
    _Bool _showSplit;
    id <WADropItemTableViewCellDelegate> _delegate;
    NSString *_userData;
    NSString *_value;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WADropItemTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)onClose:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)setContent:(id)arg1 withTitle:(id)arg2;
@property(nonatomic) _Bool showSplit; // @synthesize showSplit=_showSplit;
@property(retain, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;

@end

