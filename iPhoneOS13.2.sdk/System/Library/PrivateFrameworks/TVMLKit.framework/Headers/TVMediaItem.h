//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, _TVSecureKeyLoader;

@interface TVMediaItem : NSObject
{
    _Bool _containsExplicitContent;
    _TVSecureKeyLoader *secureKeyLoader;
    NSString *_type;
    NSURL *_url;
    NSString *_title;
    NSString *_subtitle;
    NSString *_itemDescription;
    NSString *_contentRatingDomain;
    NSNumber *_contentRatingRanking;
    NSURL *_artworkImageURL;
    double _resumeTime;
    NSArray *_interstitials;
    NSArray *_highlightGroups;
    NSDictionary *_userInfo;
    NSString *_contentRating;
    double _contentProposalPresentationTime;
    double _contentProposalAutomaticAcceptanceInterval;
    double _playbackProgress;
    NSString *_externalIdentifier;
    NSString *_externalProfileIdentifier;
    NSString *_externalServiceIdentifier;
}

@property(copy, nonatomic) NSString *externalServiceIdentifier; // @synthesize externalServiceIdentifier=_externalServiceIdentifier;
@property(copy, nonatomic) NSString *externalProfileIdentifier; // @synthesize externalProfileIdentifier=_externalProfileIdentifier;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property(nonatomic) double contentProposalAutomaticAcceptanceInterval; // @synthesize contentProposalAutomaticAcceptanceInterval=_contentProposalAutomaticAcceptanceInterval;
@property(nonatomic) double contentProposalPresentationTime; // @synthesize contentProposalPresentationTime=_contentProposalPresentationTime;
@property(copy, nonatomic) NSString *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *highlightGroups; // @synthesize highlightGroups=_highlightGroups;
@property(retain, nonatomic) NSArray *interstitials; // @synthesize interstitials=_interstitials;
@property(nonatomic) double resumeTime; // @synthesize resumeTime=_resumeTime;
@property(nonatomic) _Bool containsExplicitContent; // @synthesize containsExplicitContent=_containsExplicitContent;
@property(retain, nonatomic) NSURL *artworkImageURL; // @synthesize artworkImageURL=_artworkImageURL;
@property(retain, nonatomic) NSNumber *contentRatingRanking; // @synthesize contentRatingRanking=_contentRatingRanking;
@property(retain, nonatomic) NSString *contentRatingDomain; // @synthesize contentRatingDomain=_contentRatingDomain;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) _TVSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader;

@end
