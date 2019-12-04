//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GEOFeatureStyleAttributes, GEOPDAutocompleteEntry, GEOPDBrowseCategory, NSArray, NSData, NSString, NSURL;
@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <NSSecureCoding>
{
    GEOPDBrowseCategory *_browseCategory;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    NSArray *_subcategories;
}

+ (id)categoryForURL:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)sendFeedbackForVisibleCategories:(id)arg1;
@property(readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property(readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(readonly, nonatomic, getter=isSubCategorySameAsTopLevel) _Bool subCategorySameAsTopLevel;
@property(readonly, nonatomic) int subCategoryType;
@property(readonly, nonatomic) int sortOrder;
@property(readonly, nonatomic) int displayMode;
- (id)_browseCategory;
@property(readonly, nonatomic) NSURL *mapsURL;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) NSString *popularTokenString;
@property(readonly, nonatomic) NSString *shortDisplayString;
@property(readonly, nonatomic) NSString *displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAutocompleteEntry:(id)arg1;
- (id)initWithBrowseCategory:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)serverMetadata;
- (void)sendFeedback;

@end

