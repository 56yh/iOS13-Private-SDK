//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntry.h>

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderIndexBarEntry : SKUIIndexBarEntry
{
    struct CGSize _placeholderSize;
}

@property(readonly, nonatomic) struct CGSize placeholderSize; // @synthesize placeholderSize=_placeholderSize;
- (struct CGSize)_calculatedContentSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPlaceholderSize:(struct CGSize)arg1;

@end

