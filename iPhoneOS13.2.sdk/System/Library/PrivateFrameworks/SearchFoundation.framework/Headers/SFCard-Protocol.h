//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol SFCard 
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *entityProtobufMessages;
@property(nonatomic) _Bool flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) unsigned long long queryId;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier;
@property(nonatomic) int source;
@property(copy, nonatomic) NSURL *urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId;
@property(copy, nonatomic) NSArray *dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData;
@property(copy) NSArray *cardSections;
@property(nonatomic) int type;
@property(copy, nonatomic) NSString *title;
@end

