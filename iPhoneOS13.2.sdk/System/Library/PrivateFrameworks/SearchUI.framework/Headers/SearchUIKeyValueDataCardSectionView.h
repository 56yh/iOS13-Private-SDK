//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class TLKKeyValueView;

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView
{
}

+ (int)separatorStyleForCardSection:(id)arg1;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)convertSFKeyValueData:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKKeyValueView *contentView; // @dynamic contentView;

@end

