//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDictionary, NSString, NSURL, UIImage;
@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeem : NSObject <NSSecureCoding>
{
    _Bool _hideItemView;
    NSArray *_items;
    NSArray *_downloads;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSString *_creditDisplay;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    NSURL *_customizedThankyouURL;
    UIImage *_headerImage;
    id <SKUIArtworkProviding> _headerArtworkProvider;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double ITunesPassLearnMoreAlertInterval; // @synthesize ITunesPassLearnMoreAlertInterval=_ITunesPassLearnMoreAlertInterval;
@property(nonatomic) _Bool hideItemView; // @synthesize hideItemView=_hideItemView;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <SKUIArtworkProviding> headerArtworkProvider; // @synthesize headerArtworkProvider=_headerArtworkProvider;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) NSURL *customizedThankyouURL; // @synthesize customizedThankyouURL=_customizedThankyouURL;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSDictionary *thankYouDictionary; // @synthesize thankYouDictionary=_thankYouDictionary;
@property(copy, nonatomic) NSString *creditDisplay; // @synthesize creditDisplay=_creditDisplay;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *credit; // @synthesize credit=_credit;
@property(retain, nonatomic) NSString *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property(retain, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

