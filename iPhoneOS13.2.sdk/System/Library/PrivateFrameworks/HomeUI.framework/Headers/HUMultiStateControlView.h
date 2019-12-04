//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UISegmentedControl;
@protocol HUControlViewDelegate;

@interface HUMultiStateControlView : UIView <HUControlView>
{
    NSMutableArray *_possibleValues;
    id <HUControlViewDelegate> _delegate;
    NSString *_identifier;
    UISegmentedControl *_segmentedControl;
}

+ (Class)valueClass;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
- (void)_selectedIndexChanged:(id)arg1;
- (void)addPossibleValue:(id)arg1 withImage:(id)arg2;
- (void)addPossibleValue:(id)arg1 withTitle:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool canBeHighlighted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

