//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface _DKQuery : NSObject <NSSecureCoding>
{
    _Bool _executeConcurrently;
}

+ (id)queryNotExecutableError;
+ (id)executableQueryForQuery:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)predicateForEventsWithNoSource;
+ (id)predicateForEventsWithNullSourceDeviceID;
+ (id)predicateForEventsWithSourceDeviceID:(id)arg1 userID:(id)arg2;
+ (id)predicateForEventsWithSourceDeviceIDs:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 itemIDs:(id)arg3;
+ (id)predicateForEventsWithSourceGroupIDs:(id)arg1;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2 groupIDs:(id)arg3;
+ (id)predicateForEventsWithSourceID:(id)arg1 bundleID:(id)arg2;
+ (id)predicateForEventsWithSourceID:(id)arg1;
+ (id)endDateSortDescriptorAscending:(_Bool)arg1;
+ (id)startDateSortDescriptorAscending:(_Bool)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValueBetween:(double)arg2 andValue:(double)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andDoubleValue:(double)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andIntegerValue:(long long)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 likeStringValue:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andStringValue:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 inValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 andValue:(id)arg2;
+ (id)predicateForObjectsWithStructuredMetadataKey:(id)arg1 andValue:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)structuredMetadataKeyPathForMetadataKey:(id)arg1;
+ (id)predicateForEventsWithStringValueInValues:(id)arg1;
+ (id)predicateForEventsWithStringValue:(id)arg1;
+ (id)predicateForEventsWithDoubleValueBetween:(double)arg1 and:(double)arg2;
+ (id)predicateForEventsWithDoubleValue:(double)arg1;
+ (id)predicateForEventsExcludingIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithIntegerValue:(long long)arg1;
+ (id)predicateForEventsWithQuantityValue:(id)arg1;
+ (id)predicateForEventsWithIdentifierValue:(id)arg1;
+ (id)predicateForEventsWithCategoryValue:(id)arg1;
+ (id)predicateForEventsWithStreamNames:(id)arg1;
+ (id)predicateForEventsWithStreamName:(id)arg1;
+ (id)predicateForEventsWithCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;
+ (id)localCreationDateSortDescriptorAscending:(_Bool)arg1;
+ (id)predicateForEventsWithLocalCreationInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithLocalCreationInDateRangeFrom:(id)arg1 toBefore:(id)arg2;
+ (id)predicateForEventsWithMinumumDuration:(double)arg1;
+ (id)predicateForEventsWithMinimumDuration:(double)arg1;
+ (id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2;
+ (id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1;
+ (id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartDateOrCreationDateBefore:(id)arg1;
+ (id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartInDateRangeFromAfter:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2;
+ (id)predicateForEventsWithStartDateAfter:(id)arg1;
+ (id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForSpotlightEventsWithBundleID:(id)arg1 sinceDate:(id)arg2;
+ (id)predicateForSpotlightEventsWithItemIdentifiers:(id)arg1 bundleID:(id)arg2;
+ (id)predicateForSpotlightEventsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
+ (id)predicateForSpotlightEventsWithBundleID:(id)arg1;
@property(nonatomic) _Bool executeConcurrently; // @synthesize executeConcurrently=_executeConcurrently;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

