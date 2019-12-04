//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

@class SFSearchResult, SearchUIAppIconImage;

@interface SearchUIAppIcon : SBLeafIcon
{
    SFSearchResult *_searchResult;
    unsigned long long _variant;
    SearchUIAppIconImage *_iconImage;
}

+ (_Bool)isPlaceholderIcon;
+ (_Bool)canGenerateIconsInBackground;
@property(retain, nonatomic) SearchUIAppIconImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)iconDidChange;
- (void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1;
- (id)uniqueIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2;

@end

