//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSDate, NSString, SKUIGiftTableSectionHeaderView, SKUIItem;

__attribute__((visibility("hidden")))
@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection
{
    NSString *_dateString;
    SKUIItem *_giftItem;
    UIEdgeInsets _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
    NSDate *_sendDate;
    long long _sendDateStyle;
}

@property(nonatomic) long long sendDateStyle; // @synthesize sendDateStyle=_sendDateStyle;
@property(copy, nonatomic) NSDate *sendDate; // @synthesize sendDate=_sendDate;
@property(retain, nonatomic) SKUIItem *giftItem; // @synthesize giftItem=_giftItem;
// - (void).cxx_destruct;
- (void)_createFormattedDateString:(BOOL)arg1;
- (id)_headerView;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)headerViewForTableView:(id)arg1;
- (void)updateCell:(id)arg1 forTransitionToSize:(CGSize)arg2;
@property(nonatomic) UIEdgeInsets headerInsets;

@end
