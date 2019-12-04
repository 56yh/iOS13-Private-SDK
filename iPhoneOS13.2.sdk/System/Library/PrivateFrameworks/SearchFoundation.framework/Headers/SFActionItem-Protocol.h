//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@protocol SFActionItem 
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int mediaEntityType;
@property(copy, nonatomic) NSString *persistentID;
@property(copy, nonatomic) NSURL *messageURL;
@property(copy, nonatomic) NSString *messageIdentifier;
@property(retain, nonatomic) SFLatLng *location;
@property(retain, nonatomic) SFImage *baseIcon;
@property(retain, nonatomic) SFImage *icon;
@property(nonatomic) _Bool isITunes;
@property(copy, nonatomic) NSString *labelITunes;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *offerType;
@property(copy, nonatomic) NSString *provider;
@property(nonatomic) double longitude;
@property(nonatomic) double latitude;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *email;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) SFPunchout *punchout;
@property(copy, nonatomic) NSString *localMediaIdentifier;
@property(nonatomic) _Bool requiresLocalMedia;
@property(copy, nonatomic) NSArray *storeIdentifiers;
@property(nonatomic) _Bool isOverlay;
@property(copy, nonatomic) NSString *labelForLocalMedia;
@property(copy, nonatomic) NSString *label;
@end

