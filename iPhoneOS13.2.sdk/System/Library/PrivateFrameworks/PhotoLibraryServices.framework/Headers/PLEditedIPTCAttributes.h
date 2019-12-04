//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, PLAdditionalAssetAttributes;

@interface PLEditedIPTCAttributes : PLManagedObject
{
}

+ (id)distinctValuesForKeyPath:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)iptcKeyMap;
- (void)willSave;
- (void)clearEditedIPTCData;
- (void)setIPTCData:(id)arg1;
- (_Bool)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(readonly, nonatomic) NSString *actionAdvised; // @dynamic actionAdvised;
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(readonly, nonatomic) NSString *audioDuration; // @dynamic audioDuration;
@property(readonly, nonatomic) NSString *audioOutcue; // @dynamic audioOutcue;
@property(readonly, nonatomic) NSString *audioSamplingRate; // @dynamic audioSamplingRate;
@property(readonly, nonatomic) NSString *audioSamplingRes; // @dynamic audioSamplingRes;
@property(readonly, nonatomic) NSString *audioType; // @dynamic audioType;
@property(readonly, nonatomic) NSString *byLine; // @dynamic byLine;
@property(readonly, nonatomic) NSString *byLineTitle; // @dynamic byLineTitle;
@property(readonly, nonatomic) NSString *caption; // @dynamic caption;
@property(readonly, nonatomic) NSString *category; // @dynamic category;
@property(readonly, nonatomic) NSString *ciAdrCity; // @dynamic ciAdrCity;
@property(readonly, nonatomic) NSString *ciAdrCtry; // @dynamic ciAdrCtry;
@property(readonly, nonatomic) NSString *ciAdrExtadr; // @dynamic ciAdrExtadr;
@property(readonly, nonatomic) NSString *ciAdrPcode; // @dynamic ciAdrPcode;
@property(readonly, nonatomic) NSString *ciAdrRegion; // @dynamic ciAdrRegion;
@property(readonly, nonatomic) NSString *ciEmailWork; // @dynamic ciEmailWork;
@property(readonly, nonatomic) NSString *ciTelWork; // @dynamic ciTelWork;
@property(readonly, nonatomic) NSString *ciUrlWork; // @dynamic ciUrlWork;
@property(readonly, nonatomic) NSString *city; // @dynamic city;
@property(readonly, nonatomic) NSString *contact; // @dynamic contact;
@property(readonly, nonatomic) NSString *contentLocationCode; // @dynamic contentLocationCode;
@property(readonly, nonatomic) NSString *contentLocationName; // @dynamic contentLocationName;
@property(readonly, nonatomic) NSString *copyrightNotice; // @dynamic copyrightNotice;
@property(readonly, nonatomic) NSString *countryPrimaryLocationCode; // @dynamic countryPrimaryLocationCode;
@property(readonly, nonatomic) NSString *countryPrimaryLocationName; // @dynamic countryPrimaryLocationName;
@property(readonly, nonatomic) NSString *creatorContactInfo; // @dynamic creatorContactInfo;
@property(readonly, nonatomic) NSString *credit; // @dynamic credit;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
@property(readonly, nonatomic) NSString *dateCreated; // @dynamic dateCreated;
@property(readonly, nonatomic) NSString *digitalCreationDate; // @dynamic digitalCreationDate;
@property(readonly, nonatomic) NSString *digitalCreationTime; // @dynamic digitalCreationTime;
@property(readonly, nonatomic) NSString *editStatus; // @dynamic editStatus;
@property(readonly, nonatomic) NSString *editorialUpdate; // @dynamic editorialUpdate;
@property(readonly, nonatomic) NSString *expirationDate; // @dynamic expirationDate;
@property(readonly, nonatomic) NSString *expirationTime; // @dynamic expirationTime;
@property(readonly, nonatomic) NSString *fixtureIdentifier; // @dynamic fixtureIdentifier;
@property(readonly, nonatomic) NSString *headline; // @dynamic headline;
@property(readonly, nonatomic) NSString *imageOrientation; // @dynamic imageOrientation;
@property(readonly, nonatomic) NSString *imageType; // @dynamic imageType;
@property(readonly, nonatomic) NSString *keywords; // @dynamic keywords;
@property(readonly, nonatomic) NSString *languageIdentifier; // @dynamic languageIdentifier;
@property(readonly, nonatomic) NSString *objectAttributeReference; // @dynamic objectAttributeReference;
@property(readonly, nonatomic) NSString *objectCycle; // @dynamic objectCycle;
@property(readonly, nonatomic) NSString *objectName; // @dynamic objectName;
@property(readonly, nonatomic) NSString *objectTypeReference; // @dynamic objectTypeReference;
@property(readonly, nonatomic) NSString *originalTransmissionReference; // @dynamic originalTransmissionReference;
@property(readonly, nonatomic) NSString *originatingProgram; // @dynamic originatingProgram;
@property(readonly, nonatomic) NSString *programVersion; // @dynamic programVersion;
@property(readonly, nonatomic) NSString *provinceState; // @dynamic provinceState;
@property(readonly, nonatomic) NSString *referenceDate; // @dynamic referenceDate;
@property(readonly, nonatomic) NSString *referenceNumber; // @dynamic referenceNumber;
@property(readonly, nonatomic) NSString *referenceService; // @dynamic referenceService;
@property(readonly, nonatomic) NSString *releaseDate; // @dynamic releaseDate;
@property(readonly, nonatomic) NSString *releaseTime; // @dynamic releaseTime;
@property(readonly, nonatomic) NSString *scene; // @dynamic scene;
@property(readonly, nonatomic) NSString *source; // @dynamic source;
@property(readonly, nonatomic) NSString *specialInstructions; // @dynamic specialInstructions;
@property(readonly, nonatomic) NSString *starRating; // @dynamic starRating;
@property(readonly, nonatomic) NSString *subLocation; // @dynamic subLocation;
@property(readonly, nonatomic) NSString *subjectReference; // @dynamic subjectReference;
@property(readonly, nonatomic) NSString *supplementalCategory; // @dynamic supplementalCategory;
@property(readonly, nonatomic) NSString *timeCreated; // @dynamic timeCreated;
@property(readonly, nonatomic) NSString *urgency; // @dynamic urgency;
@property(readonly, nonatomic) NSString *usageTerms; // @dynamic usageTerms;
@property(readonly, nonatomic) NSString *writerEditor; // @dynamic writerEditor;

@end

