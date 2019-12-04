//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSOrderedSet, NSString, WFCoercionOptions, WFFileRepresentation, WFFileType, WFObjectRepresentation, WFObjectType, WFRepresentation, WFType;

@protocol WFContentItemClass
+ (NSString *)countDescription;
+ (NSString *)localizedPluralFilterDescription;
+ (NSString *)pluralFilterDescription;
+ (NSString *)localizedFilterDescription;
+ (NSString *)filterDescription;
+ (NSString *)localizedPluralTypeDescription;
+ (NSString *)pluralTypeDescription;
+ (NSString *)localizedTypeDescription;
+ (NSString *)typeDescription;
+ (NSArray *)contentCategories;
+ (NSOrderedSet *)outputTypes;
+ (NSOrderedSet *)ownedTypes;

@optional
+ (NSArray *)filterRepresentationsForAllowedContent:(NSArray *)arg1;
+ (NSArray *)propertyBuilders;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(WFType *)arg1;
+ (id)itemWithSerializedItem:(NSDictionary *)arg1 forType:(WFFileType *)arg2 named:(NSString *)arg3;
+ (NSOrderedSet *)ownedPasteboardTypes;
- (_Bool)cachesSupportedTypes;
- (_Bool)canGenerateRepresentationForType:(WFType *)arg1;
- (WFObjectType *)preferredObjectType;
- (WFFileType *)preferredFileType;
- (WFRepresentation *)internalRepresentationForCopying;
- (_Bool)includesFileRepresentationInSerializedItem;
- (void)getFileRepresentationsForSerialization:(void (^)(NSArray *, NSError *))arg1;
- (NSDictionary *)additionalRepresentationsForSerialization;
- (void)getPreferredFileSize:(void (^)(long long))arg1;
- (void)getPreferredFileExtension:(void (^)(NSString *))arg1;
- (void)generateFileRepresentations:(void (^)(NSArray *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forType:(WFFileType *)arg3;
- (void)generateFileRepresentation:(void (^)(WFFileRepresentation *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forType:(WFFileType *)arg3;
- (void)generateObjectRepresentations:(void (^)(NSArray *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentation:(void (^)(id, NSString *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forClass:(Class)arg3;
- (WFObjectRepresentation *)generateObjectRepresentationForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
- (WFFileRepresentation *)generateFileRepresentationForType:(WFFileType *)arg1 error:(id *)arg2;
- (NSArray *)generateObjectRepresentationsForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
- (NSArray *)generateFileRepresentationsForType:(WFFileType *)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
@end

