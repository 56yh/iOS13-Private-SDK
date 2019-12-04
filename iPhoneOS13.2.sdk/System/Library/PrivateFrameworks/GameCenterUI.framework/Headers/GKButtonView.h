//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class GKCollectionViewDataSource, NSMutableArray, UIButton;

@interface GKButtonView : UICollectionReusableView
{
    UIButton *_button;
    SEL _action;
    NSMutableArray *_buttonConstraints;
    GKCollectionViewDataSource *_dataSource;
}

+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;
+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)dealloc;
- (void)buttonPressed:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

