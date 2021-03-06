//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadRatingRegion;
    NSNumber *_payloadRatingApps;
    NSNumber *_payloadRatingMovies;
    NSNumber *_payloadRatingTVShows;
    NSNumber *_payloadAllowExplicitContent;
    NSNumber *_payloadAllowShowingUndownloadedTV;
    NSNumber *_payloadAllowShowingUndownloadedMovies;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withRatingRegion:(id)arg2 withRatingApps:(id)arg3 withRatingMovies:(id)arg4 withRatingTVShows:(id)arg5 withAllowExplicitContent:(id)arg6 withAllowShowingUndownloadedTV:(id)arg7 withAllowShowingUndownloadedMovies:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedMovies; // @synthesize payloadAllowShowingUndownloadedMovies=_payloadAllowShowingUndownloadedMovies;
@property(copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedTV; // @synthesize payloadAllowShowingUndownloadedTV=_payloadAllowShowingUndownloadedTV;
@property(copy, nonatomic) NSNumber *payloadAllowExplicitContent; // @synthesize payloadAllowExplicitContent=_payloadAllowExplicitContent;
@property(copy, nonatomic) NSNumber *payloadRatingTVShows; // @synthesize payloadRatingTVShows=_payloadRatingTVShows;
@property(copy, nonatomic) NSNumber *payloadRatingMovies; // @synthesize payloadRatingMovies=_payloadRatingMovies;
@property(copy, nonatomic) NSNumber *payloadRatingApps; // @synthesize payloadRatingApps=_payloadRatingApps;
@property(copy, nonatomic) NSString *payloadRatingRegion; // @synthesize payloadRatingRegion=_payloadRatingRegion;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

