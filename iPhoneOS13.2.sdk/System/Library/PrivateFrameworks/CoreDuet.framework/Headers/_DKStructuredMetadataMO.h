//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface _DKStructuredMetadataMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *_CDEntityMetadataKey__bestLanguage; // @dynamic _CDEntityMetadataKey__bestLanguage;
@property(copy, nonatomic) NSString *_CDEntityMetadataKey__name; // @dynamic _CDEntityMetadataKey__name;
@property(nonatomic) short _CDPortraitMetadataKey__algorithm; // @dynamic _CDPortraitMetadataKey__algorithm;
@property(nonatomic) short _CDPortraitMetadataKey__assetVersion; // @dynamic _CDPortraitMetadataKey__assetVersion;
@property(nonatomic) double _CDPortraitMetadataKey__decayRate; // @dynamic _CDPortraitMetadataKey__decayRate;
@property(copy, nonatomic) NSString *_CDPortraitMetadataKey__osBuild; // @dynamic _CDPortraitMetadataKey__osBuild;
@property(nonatomic) double _CDPortraitMetadataKey__score; // @dynamic _CDPortraitMetadataKey__score;
@property(nonatomic) double _CDPortraitMetadataKey__sentimentScore; // @dynamic _CDPortraitMetadataKey__sentimentScore;
@property(copy, nonatomic) NSString *_DKAirPlayPredictionMetadataKey__outputDeviceID; // @dynamic _DKAirPlayPredictionMetadataKey__outputDeviceID;
@property(copy, nonatomic) NSString *_DKAirPlayPredictionMetadataKey__subtype; // @dynamic _DKAirPlayPredictionMetadataKey__subtype;
@property(copy, nonatomic) NSString *_DKAlarmMetadataKey__alarmID; // @dynamic _DKAlarmMetadataKey__alarmID;
@property(copy, nonatomic) NSNumber *_DKAppInstallMetadataKey__isInstall; // @dynamic _DKAppInstallMetadataKey__isInstall;
@property(copy, nonatomic) NSString *_DKAppInstallMetadataKey__primaryCategory; // @dynamic _DKAppInstallMetadataKey__primaryCategory;
@property(retain, nonatomic) NSData *_DKAppInstallMetadataKey__subCategories; // @dynamic _DKAppInstallMetadataKey__subCategories;
@property(copy, nonatomic) NSString *_DKAppInstallMetadataKey__title; // @dynamic _DKAppInstallMetadataKey__title;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__activityType; // @dynamic _DKApplicationActivityMetadataKey__activityType;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__contentDescription; // @dynamic _DKApplicationActivityMetadataKey__contentDescription;
@property(copy, nonatomic) NSDate *_DKApplicationActivityMetadataKey__expirationDate; // @dynamic _DKApplicationActivityMetadataKey__expirationDate;
@property(copy, nonatomic) NSNumber *_DKApplicationActivityMetadataKey__isEligibleForPrediction; // @dynamic _DKApplicationActivityMetadataKey__isEligibleForPrediction;
@property(copy, nonatomic) NSNumber *_DKApplicationActivityMetadataKey__isPubliclyIndexable; // @dynamic _DKApplicationActivityMetadataKey__isPubliclyIndexable;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__itemIdentifier; // @dynamic _DKApplicationActivityMetadataKey__itemIdentifier;
@property(copy, nonatomic) NSURL *_DKApplicationActivityMetadataKey__itemRelatedContentURL; // @dynamic _DKApplicationActivityMetadataKey__itemRelatedContentURL;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__itemRelatedUniqueIdentifier; // @dynamic _DKApplicationActivityMetadataKey__itemRelatedUniqueIdentifier;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__suggestedInvocationPhrase; // @dynamic _DKApplicationActivityMetadataKey__suggestedInvocationPhrase;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__title; // @dynamic _DKApplicationActivityMetadataKey__title;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__userActivityRequiredString; // @dynamic _DKApplicationActivityMetadataKey__userActivityRequiredString;
@property(copy, nonatomic) NSString *_DKApplicationActivityMetadataKey__userActivityUUID; // @dynamic _DKApplicationActivityMetadataKey__userActivityUUID;
@property(copy, nonatomic) NSString *_DKApplicationMetadataKey__backboardState; // @dynamic _DKApplicationMetadataKey__backboardState;
@property(copy, nonatomic) NSString *_DKApplicationMetadataKey__extensionContainingBundleIdentifier; // @dynamic _DKApplicationMetadataKey__extensionContainingBundleIdentifier;
@property(copy, nonatomic) NSString *_DKApplicationMetadataKey__extensionHostIdentifier; // @dynamic _DKApplicationMetadataKey__extensionHostIdentifier;
@property(copy, nonatomic) NSString *_DKApplicationMetadataKey__launchReason; // @dynamic _DKApplicationMetadataKey__launchReason;
@property(copy, nonatomic) NSNumber *_DKApplicationMetadataKey__processIdentifier; // @dynamic _DKApplicationMetadataKey__processIdentifier;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__channels; // @dynamic _DKAudioMetadataKey__channels;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__dataSources; // @dynamic _DKAudioMetadataKey__dataSources;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__identifier; // @dynamic _DKAudioMetadataKey__identifier;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__portName; // @dynamic _DKAudioMetadataKey__portName;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__portType; // @dynamic _DKAudioMetadataKey__portType;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__preferredDataSource; // @dynamic _DKAudioMetadataKey__preferredDataSource;
@property(copy, nonatomic) NSNumber *_DKAudioMetadataKey__routeChangeReason; // @dynamic _DKAudioMetadataKey__routeChangeReason;
@property(copy, nonatomic) NSString *_DKAudioMetadataKey__selectedDataSource; // @dynamic _DKAudioMetadataKey__selectedDataSource;
@property(copy, nonatomic) NSString *_DKBatterySaverMetadataKey__source; // @dynamic _DKBatterySaverMetadataKey__source;
@property(copy, nonatomic) NSString *_DKBluetoothMetadataKey__address; // @dynamic _DKBluetoothMetadataKey__address;
@property(copy, nonatomic) NSNumber *_DKBluetoothMetadataKey__deviceType; // @dynamic _DKBluetoothMetadataKey__deviceType;
@property(copy, nonatomic) NSString *_DKBluetoothMetadataKey__name; // @dynamic _DKBluetoothMetadataKey__name;
@property(copy, nonatomic) NSString *_DKBulletinBoardMetadataKey__feed; // @dynamic _DKBulletinBoardMetadataKey__feed;
@property(copy, nonatomic) NSNumber *_DKBulletinBoardMetadataKey__hasDate; // @dynamic _DKBulletinBoardMetadataKey__hasDate;
@property(copy, nonatomic) NSString *_DKBulletinBoardMetadataKey__message; // @dynamic _DKBulletinBoardMetadataKey__message;
@property(copy, nonatomic) NSString *_DKBulletinBoardMetadataKey__subtitle; // @dynamic _DKBulletinBoardMetadataKey__subtitle;
@property(copy, nonatomic) NSString *_DKBulletinBoardMetadataKey__title; // @dynamic _DKBulletinBoardMetadataKey__title;
@property(copy, nonatomic) NSString *_DKCalendarMetadataKey__interaction; // @dynamic _DKCalendarMetadataKey__interaction;
@property(copy, nonatomic) NSString *_DKCallMetadataKey__interaction; // @dynamic _DKCallMetadataKey__interaction;
@property(nonatomic) _Bool _DKDeviceBatteryPercentageMetadataKey__fullyCharged; // @dynamic _DKDeviceBatteryPercentageMetadataKey__fullyCharged;
@property(copy, nonatomic) NSString *_DKDeviceIdMetadataKey__deviceIdentifier; // @dynamic _DKDeviceIdMetadataKey__deviceIdentifier;
@property(copy, nonatomic) NSNumber *_DKDeviceIsPluggedInMetadataKey__adapterType; // @dynamic _DKDeviceIsPluggedInMetadataKey__adapterType;
@property(copy, nonatomic) NSString *_DKDeviceStandbyTimerMetadataKey__delay; // @dynamic _DKDeviceStandbyTimerMetadataKey__delay;
@property(copy, nonatomic) NSString *_DKDeviceStandbyTimerMetadataKey__timerType; // @dynamic _DKDeviceStandbyTimerMetadataKey__timerType;
@property(copy, nonatomic) NSNumber *_DKDigitalHealthMetadataKey__usageType; // @dynamic _DKDigitalHealthMetadataKey__usageType;
@property(copy, nonatomic) NSString *_DKDigitalHealthMetadataKey__webDomain; // @dynamic _DKDigitalHealthMetadataKey__webDomain;
@property(copy, nonatomic) NSURL *_DKDigitalHealthMetadataKey__webpageURL; // @dynamic _DKDigitalHealthMetadataKey__webpageURL;
@property(copy, nonatomic) NSString *_DKDiscoverabilitySignalsMetadataKey__context; // @dynamic _DKDiscoverabilitySignalsMetadataKey__context;
@property(copy, nonatomic) NSString *_DKDiscoverabilitySignalsMetadataKey__osBuild; // @dynamic _DKDiscoverabilitySignalsMetadataKey__osBuild;
@property(retain, nonatomic) NSData *_DKDiscoverabilityUsageMetadataKey__analyticsEvent; // @dynamic _DKDiscoverabilityUsageMetadataKey__analyticsEvent;
@property(copy, nonatomic) NSString *_DKDiscoverabilityUsageMetadataKey__bundleID; // @dynamic _DKDiscoverabilityUsageMetadataKey__bundleID;
@property(copy, nonatomic) NSNumber *_DKDiscoverabilityUsageMetadataKey__contentType; // @dynamic _DKDiscoverabilityUsageMetadataKey__contentType;
@property(copy, nonatomic) NSString *_DKDiscoverabilityUsageMetadataKey__context; // @dynamic _DKDiscoverabilityUsageMetadataKey__context;
@property(retain, nonatomic) NSData *_DKDiscoverabilityUsageMetadataKey__eligibleContext; // @dynamic _DKDiscoverabilityUsageMetadataKey__eligibleContext;
@property(copy, nonatomic) NSNumber *_DKDiscoverabilityUsageMetadataKey__ineligibleReason; // @dynamic _DKDiscoverabilityUsageMetadataKey__ineligibleReason;
@property(copy, nonatomic) NSString *_DKDiscoverabilityUsageMetadataKey__osBuild; // @dynamic _DKDiscoverabilityUsageMetadataKey__osBuild;
@property(copy, nonatomic) NSNumber *_DKDiscoverabilityUsageMetadataKey__state; // @dynamic _DKDiscoverabilityUsageMetadataKey__state;
@property(copy, nonatomic) NSNumber *_DKGlanceLaunchMetadata__deviceIdentifier; // @dynamic _DKGlanceLaunchMetadata__deviceIdentifier;
@property(copy, nonatomic) NSString *_DKIntentMetadataKey__derivedIntentIdentifier; // @dynamic _DKIntentMetadataKey__derivedIntentIdentifier;
@property(copy, nonatomic) NSNumber *_DKIntentMetadataKey__direction; // @dynamic _DKIntentMetadataKey__direction;
@property(copy, nonatomic) NSNumber *_DKIntentMetadataKey__donatedBySiri; // @dynamic _DKIntentMetadataKey__donatedBySiri;
@property(copy, nonatomic) NSString *_DKIntentMetadataKey__intentClass; // @dynamic _DKIntentMetadataKey__intentClass;
@property(copy, nonatomic) NSNumber *_DKIntentMetadataKey__intentHandlingStatus; // @dynamic _DKIntentMetadataKey__intentHandlingStatus;
@property(copy, nonatomic) NSNumber *_DKIntentMetadataKey__intentType; // @dynamic _DKIntentMetadataKey__intentType;
@property(copy, nonatomic) NSString *_DKIntentMetadataKey__intentVerb; // @dynamic _DKIntentMetadataKey__intentVerb;
@property(retain, nonatomic) NSData *_DKIntentMetadataKey__serializedInteraction; // @dynamic _DKIntentMetadataKey__serializedInteraction;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__URL; // @dynamic _DKLocationApplicationActivityMetadataKey__URL;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__city; // @dynamic _DKLocationApplicationActivityMetadataKey__city;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__country; // @dynamic _DKLocationApplicationActivityMetadataKey__country;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__displayName; // @dynamic _DKLocationApplicationActivityMetadataKey__displayName;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__fullyFormattedAddress; // @dynamic _DKLocationApplicationActivityMetadataKey__fullyFormattedAddress;
@property(copy, nonatomic) NSNumber *_DKLocationApplicationActivityMetadataKey__latitude; // @dynamic _DKLocationApplicationActivityMetadataKey__latitude;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__locationName; // @dynamic _DKLocationApplicationActivityMetadataKey__locationName;
@property(copy, nonatomic) NSNumber *_DKLocationApplicationActivityMetadataKey__longitude; // @dynamic _DKLocationApplicationActivityMetadataKey__longitude;
@property(retain, nonatomic) NSData *_DKLocationApplicationActivityMetadataKey__phoneNumbers; // @dynamic _DKLocationApplicationActivityMetadataKey__phoneNumbers;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__postalCode_v2; // @dynamic _DKLocationApplicationActivityMetadataKey__postalCode_v2;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__stateOrProvince; // @dynamic _DKLocationApplicationActivityMetadataKey__stateOrProvince;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__subThoroughfare; // @dynamic _DKLocationApplicationActivityMetadataKey__subThoroughfare;
@property(copy, nonatomic) NSString *_DKLocationApplicationActivityMetadataKey__thoroughfare; // @dynamic _DKLocationApplicationActivityMetadataKey__thoroughfare;
@property(copy, nonatomic) NSString *_DKLocationMetadataKey__identifier; // @dynamic _DKLocationMetadataKey__identifier;
@property(copy, nonatomic) NSNumber *_DKLocationMetadataKey__latitude; // @dynamic _DKLocationMetadataKey__latitude;
@property(copy, nonatomic) NSNumber *_DKLocationMetadataKey__longitude; // @dynamic _DKLocationMetadataKey__longitude;
@property(copy, nonatomic) NSString *_DKMapsShareEtaFeedbackMetadataKey__contactId; // @dynamic _DKMapsShareEtaFeedbackMetadataKey__contactId;
@property(copy, nonatomic) NSString *_DKMapsShareEtaFeedbackMetadataKey__navigationEndLocationIdentifier; // @dynamic _DKMapsShareEtaFeedbackMetadataKey__navigationEndLocationIdentifier;
@property(copy, nonatomic) NSString *_DKMapsShareEtaFeedbackMetadataKey__navigationStartLocationIdentifier; // @dynamic _DKMapsShareEtaFeedbackMetadataKey__navigationStartLocationIdentifier;
@property(copy, nonatomic) NSString *_DKMetadataHomeAppView__homeUUID; // @dynamic _DKMetadataHomeAppView__homeUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeAppView__viewInformation; // @dynamic _DKMetadataHomeAppView__viewInformation;
@property(copy, nonatomic) NSString *_DKMetadataHomeAppView__viewName; // @dynamic _DKMetadataHomeAppView__viewName;
@property(copy, nonatomic) NSString *_DKMetadataHomeAppView__viewUUID; // @dynamic _DKMetadataHomeAppView__viewUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__accessoryName; // @dynamic _DKMetadataHomeKitAccessoryControl__accessoryName;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__accessoryUUID; // @dynamic _DKMetadataHomeKitAccessoryControl__accessoryUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__characteristicType; // @dynamic _DKMetadataHomeKitAccessoryControl__characteristicType;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__clientName; // @dynamic _DKMetadataHomeKitAccessoryControl__clientName;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__homeUUID; // @dynamic _DKMetadataHomeKitAccessoryControl__homeUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__serviceName; // @dynamic _DKMetadataHomeKitAccessoryControl__serviceName;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitAccessoryControl__serviceType; // @dynamic _DKMetadataHomeKitAccessoryControl__serviceType;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__actionSetName; // @dynamic _DKMetadataHomeKitScene__actionSetName;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__actionSetType; // @dynamic _DKMetadataHomeKitScene__actionSetType;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__actionSetUUID; // @dynamic _DKMetadataHomeKitScene__actionSetUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__clientName; // @dynamic _DKMetadataHomeKitScene__clientName;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__homeUUID; // @dynamic _DKMetadataHomeKitScene__homeUUID;
@property(copy, nonatomic) NSString *_DKMetadataHomeKitScene__sceneName; // @dynamic _DKMetadataHomeKitScene__sceneName;
@property(copy, nonatomic) NSString *_DKMicroLocationMetadataKey__domain; // @dynamic _DKMicroLocationMetadataKey__domain;
@property(copy, nonatomic) NSString *_DKMicroLocationMetadataKey__locationDistribution; // @dynamic _DKMicroLocationMetadataKey__locationDistribution;
@property(copy, nonatomic) NSString *_DKMicroLocationMetadataKey__microLocationDistribution; // @dynamic _DKMicroLocationMetadataKey__microLocationDistribution;
@property(retain, nonatomic) NSData *_DKMicroLocationMetadataKey__probabilityVector; // @dynamic _DKMicroLocationMetadataKey__probabilityVector;
@property(copy, nonatomic) NSString *_DKNotificationUsageMetadataKey__bundleID; // @dynamic _DKNotificationUsageMetadataKey__bundleID;
@property(copy, nonatomic) NSString *_DKNotificationUsageMetadataKey__identifier; // @dynamic _DKNotificationUsageMetadataKey__identifier;
@property(copy, nonatomic) NSString *_DKNowPlayingMetadataKey__album; // @dynamic _DKNowPlayingMetadataKey__album;
@property(copy, nonatomic) NSString *_DKNowPlayingMetadataKey__artist; // @dynamic _DKNowPlayingMetadataKey__artist;
@property(copy, nonatomic) NSNumber *_DKNowPlayingMetadataKey__duration; // @dynamic _DKNowPlayingMetadataKey__duration;
@property(copy, nonatomic) NSNumber *_DKNowPlayingMetadataKey__elapsed; // @dynamic _DKNowPlayingMetadataKey__elapsed;
@property(copy, nonatomic) NSString *_DKNowPlayingMetadataKey__genre; // @dynamic _DKNowPlayingMetadataKey__genre;
@property(copy, nonatomic) NSNumber *_DKNowPlayingMetadataKey__identifier; // @dynamic _DKNowPlayingMetadataKey__identifier;
@property(nonatomic) _Bool _DKNowPlayingMetadataKey__isAirPlayVideo; // @dynamic _DKNowPlayingMetadataKey__isAirPlayVideo;
@property(copy, nonatomic) NSString *_DKNowPlayingMetadataKey__mediaType; // @dynamic _DKNowPlayingMetadataKey__mediaType;
@property(retain, nonatomic) NSData *_DKNowPlayingMetadataKey__outputDeviceIDs; // @dynamic _DKNowPlayingMetadataKey__outputDeviceIDs;
@property(nonatomic) short _DKNowPlayingMetadataKey__playing; // @dynamic _DKNowPlayingMetadataKey__playing;
@property(copy, nonatomic) NSString *_DKNowPlayingMetadataKey__title; // @dynamic _DKNowPlayingMetadataKey__title;
@property(copy, nonatomic) NSDate *_DKPeriodMetadataKey__periodEnd; // @dynamic _DKPeriodMetadataKey__periodEnd;
@property(copy, nonatomic) NSDate *_DKPeriodMetadataKey__periodStart; // @dynamic _DKPeriodMetadataKey__periodStart;
@property(copy, nonatomic) NSString *_DKRelevantShortcutMetadataKey__keyImageProxyIdentifier; // @dynamic _DKRelevantShortcutMetadataKey__keyImageProxyIdentifier;
@property(retain, nonatomic) NSData *_DKRelevantShortcutMetadataKey__serializedRelevantShortcut; // @dynamic _DKRelevantShortcutMetadataKey__serializedRelevantShortcut;
@property(copy, nonatomic) NSString *_DKSafariHistoryMetadataKey__title; // @dynamic _DKSafariHistoryMetadataKey__title;
@property(copy, nonatomic) NSString *_DKSearchFeedbackMetadataKey__client; // @dynamic _DKSearchFeedbackMetadataKey__client;
@property(copy, nonatomic) NSString *_DKSearchFeedbackMetadataKey__contactID; // @dynamic _DKSearchFeedbackMetadataKey__contactID;
@property(nonatomic) long long _DKSearchFeedbackMetadataKey__interactionType; // @dynamic _DKSearchFeedbackMetadataKey__interactionType;
@property(nonatomic) long long _DKSearchFeedbackMetadataKey__suggestionType; // @dynamic _DKSearchFeedbackMetadataKey__suggestionType;
@property(copy, nonatomic) NSString *_DKShareSheetSuggestionMetadataKey__derivedIntentIdentifier; // @dynamic _DKShareSheetSuggestionMetadataKey__derivedIntentIdentifier;
@property(copy, nonatomic) NSString *_DKShareSheetSuggestionMetadataKey__extensionContextUUID; // @dynamic _DKShareSheetSuggestionMetadataKey__extensionContextUUID;
@property(copy, nonatomic) NSString *_DKShareSheetSuggestionMetadataKey__sourceBundleID; // @dynamic _DKShareSheetSuggestionMetadataKey__sourceBundleID;
@property(copy, nonatomic) NSString *_DKShareSheetSuggestionMetadataKey__targetBundleID; // @dynamic _DKShareSheetSuggestionMetadataKey__targetBundleID;
@property(copy, nonatomic) NSString *_DKSiriServiceMetadataKey__domain; // @dynamic _DKSiriServiceMetadataKey__domain;
@property(copy, nonatomic) NSString *_DKTimerMetadataKey__timerID; // @dynamic _DKTimerMetadataKey__timerID;
@property(copy, nonatomic) NSString *_DKTombstoneMetadataKey__eventSourceDeviceID; // @dynamic _DKTombstoneMetadataKey__eventSourceDeviceID;
@property(copy, nonatomic) NSString *_DKTombstoneMetadataKey__eventStreamName; // @dynamic _DKTombstoneMetadataKey__eventStreamName;
@property(retain, nonatomic) NSData *_QPMetricsMetadataKey__CandidateList; // @dynamic _QPMetricsMetadataKey__CandidateList;
@property(copy, nonatomic) NSString *_QPMetricsMetadataKey__Query; // @dynamic _QPMetricsMetadataKey__Query;
@property(copy, nonatomic) NSNumber *_QPMetricsMetadataKey__QueryEngaged; // @dynamic _QPMetricsMetadataKey__QueryEngaged;
@property(retain, nonatomic) NSData *_QPMetricsMetadataKey__QueryList; // @dynamic _QPMetricsMetadataKey__QueryList;
@property(copy, nonatomic) NSNumber *_QPMetricsMetadataKey__ResultEngaged; // @dynamic _QPMetricsMetadataKey__ResultEngaged;
@property(copy, nonatomic) NSNumber *_QPMetricsMetadataKey__TimeStamp; // @dynamic _QPMetricsMetadataKey__TimeStamp;
@property(copy, nonatomic) NSNumber *com_apple_calendarUIKit_userActivity_date; // @dynamic com_apple_calendarUIKit_userActivity_date;
@property(copy, nonatomic) NSNumber *com_apple_calendarUIKit_userActivity_endDate; // @dynamic com_apple_calendarUIKit_userActivity_endDate;
@property(copy, nonatomic) NSString *com_apple_calendarUIKit_userActivity_externalID; // @dynamic com_apple_calendarUIKit_userActivity_externalID;
@property(retain, nonatomic) NSSet *event; // @dynamic event;
@property(copy, nonatomic) NSString *kCDCSNotificationOptionClientIdentifierKey; // @dynamic kCDCSNotificationOptionClientIdentifierKey;
@property(copy, nonatomic) NSString *kCDCSNotificationOptionClientLaunchKey; // @dynamic kCDCSNotificationOptionClientLaunchKey;
@property(copy, nonatomic) NSString *kCDCSNotificationOptionPersistentPredicateStringKey; // @dynamic kCDCSNotificationOptionPersistentPredicateStringKey;
@property(copy, nonatomic) NSString *metadataHash; // @dynamic metadataHash;

@end

