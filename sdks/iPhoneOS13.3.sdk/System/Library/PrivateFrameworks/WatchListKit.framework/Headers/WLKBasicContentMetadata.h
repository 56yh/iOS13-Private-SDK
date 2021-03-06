//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, WLKArtworkVariantListing, WLKContentRating, WLKVideo;

@interface WLKBasicContentMetadata : NSObject
{
    NSString *_contentTypeString;
    BOOL _isEvod;
    BOOL _appleOriginal;
    NSUInteger _contentType;
    NSString *_canonicalID;
    NSURL *_tvAppDeeplinkURL;
    NSString *_title;
    NSString *_shortTitle;
    NSString *_descriptiveText;
    WLKArtworkVariantListing *_images;
    NSNumber *_commonSenseRecommendedAge;
    NSArray *_categories;
    NSArray *_genres;
    WLKVideo *_backgroundVideo;
    NSArray *_trailers;
    NSDictionary *_rolesSummary;
    WLKContentRating *_contentRating;
}

+ (Class)_classForContentType:(NSUInteger)arg1;
+ (NSUInteger)contentTypeForString:(id)arg1;
@property(readonly, nonatomic) WLKContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, copy, nonatomic) NSDictionary *rolesSummary; // @synthesize rolesSummary=_rolesSummary;
@property(readonly, nonatomic) NSArray *trailers; // @synthesize trailers=_trailers;
@property(readonly, nonatomic) WLKVideo *backgroundVideo; // @synthesize backgroundVideo=_backgroundVideo;
@property(readonly, copy, nonatomic) NSArray *genres; // @synthesize genres=_genres;
@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) NSNumber *commonSenseRecommendedAge; // @synthesize commonSenseRecommendedAge=_commonSenseRecommendedAge;
@property(readonly, nonatomic) WLKArtworkVariantListing *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(readonly, copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isAppleOriginal) BOOL appleOriginal; // @synthesize appleOriginal=_appleOriginal;
@property(readonly, nonatomic) BOOL isEvod; // @synthesize isEvod=_isEvod;
@property(readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL; // @synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, nonatomic) NSUInteger contentType; // @synthesize contentType=_contentType;
// - (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

