//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUCollectionViewCellSeparatorsProtocol-Protocol.h>
#import <HomeUI/HUSoftwareUpdateInternalResizingDelegate-Protocol.h>

@class HFItem, HUSoftwareUpdateInfoView, NSString, UIView;
@protocol HUResizableCellDelegate;

@interface HUSoftwareUpdateInfoCollectionViewCell : UICollectionViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>
{
    id <HUResizableCellDelegate> _resizingDelegate;
    HUSoftwareUpdateInfoView *_infoView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(readonly, nonatomic) HUSoftwareUpdateInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
- (void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1;
@property(nonatomic) _Bool bottomSeparatorVisible;
@property(nonatomic) _Bool topSeparatorVisible;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

