//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSData, NSDictionary, NSString;

@protocol _SFPBMediaArtworkImage 
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int mediaEntityType;
@property(copy, nonatomic) NSString *spotlightIdentifier;
@property(copy, nonatomic) NSString *persistentID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

