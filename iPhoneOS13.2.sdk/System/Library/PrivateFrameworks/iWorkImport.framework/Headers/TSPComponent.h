//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDate, NSMapTable, NSMutableSet, NSString, TSPComponentExternalReferenceMap, TSPComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap;
@protocol OS_dispatch_queue, TSPComponentDelegate;

__attribute__((visibility("hidden")))
@interface TSPComponent : NSObject <NSDiscardableContent>
{
    // Error parsing type: Ai, name: _accessCount
    id <TSPComponentDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _identifier;
    NSString *_preferredLocator;
    NSString *_locator;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    unsigned long long _parseVersion;
    unsigned long long _requiredVersion;
    _Bool _canBeDropped;
    long long _compressionAlgorithm;
    NSArray *_featureInfos;
    unsigned long long _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    NSMapTable *_writtenObjects;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    NSMutableSet *_dataReferences;
    struct {
        unsigned int usesDelayedArchiving:1;
        unsigned int modified:1;
        unsigned int persisted:1;
        unsigned int isStoredOutsideObjectArchive:1;
        unsigned int packageIdentifier:2;
        unsigned int discarded:1;
    } _flags;
    TSPComponentObjectUUIDMap *_componentObjectUUIDMap;
    unsigned long long _encodedLength;
    NSDate *_lastModificationDate;
    TSPObjectReferenceMap *_objectReferenceMap;
}

+ (id)componentsDiscardingContentOnCurrentThread;
@property(readonly, nonatomic) TSPObjectReferenceMap *objectReferenceMap; // @synthesize objectReferenceMap=_objectReferenceMap;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // @synthesize componentObjectUUIDMap=_componentObjectUUIDMap;
@property(readonly, nonatomic) NSArray *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) NSString *preferredLocator; // @synthesize preferredLocator=_preferredLocator;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) long long compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(readonly, nonatomic) _Bool canBeDropped; // @synthesize canBeDropped=_canBeDropped;
@property(readonly, nonatomic) unsigned long long requiredVersion; // @synthesize requiredVersion=_requiredVersion;
@property(readonly, nonatomic) unsigned long long parseVersion; // @synthesize parseVersion=_parseVersion;
@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
- (id)description;
- (id)additionalDescription;
- (void)enumerateDataReferences:(id /* block */)arg1;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (_Bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(_Bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (void)enumerateExternalReferences:(id /* block */)arg1;
@property(readonly, nonatomic) _Bool isTransientComponent;
@property(readonly) _Bool needsArchiving;
- (_Bool)needsArchivingImpl;
@property(readonly) _Bool persisted;
- (void)markAsDiscarded;
- (void)willDiscardComponent;
- (void)setComponentObjectUUIDMap:(id)arg1;
- (void)setReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(_Bool)arg4 parseVersion:(unsigned long long)arg5 requiredVersion:(unsigned long long)arg6 canBeDropped:(_Bool)arg7 compressionAlgorithm:(long long)arg8 rootObjectOrNil:(id)arg9 archivedObjects:(id)arg10 externalReferenceMap:(id)arg11 dataReferences:(id)arg12 readVersion:(unsigned long long)arg13 writeVersion:(unsigned long long)arg14 featureInfos:(id)arg15 componentObjectUUIDMap:(id)arg16 objectReferenceMap:(id)arg17 saveToken:(unsigned long long)arg18 encodedLength:(unsigned long long)arg19 lastModificationDate:(id)arg20 wasCopied:(_Bool)arg21 wasModifiedDuringWrite:(_Bool)arg22;
- (void)didReadObjects:(id)arg1;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setModifiedImpl:(_Bool)arg1 forObject:(id)arg2;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(_Bool)arg3;
- (void)setModified:(_Bool)arg1 forObject:(id)arg2;
@property(readonly) _Bool modified;
@property(readonly) unsigned char packageIdentifier;
- (void)setLocator:(id)arg1;
@property(readonly, nonatomic) NSString *locator;
- (_Bool)isContentDiscarded;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (void)discardContentIfPossibleFromNSCache:(_Bool)arg1;
- (void)discardContentIfPossible;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(id /* block */)arg1;
- (void)continueDiscardingContentIfPossibleUsingBlock:(id /* block */)arg1;
- (_Bool)isDiscardingContent;
@property(retain) TSPObject *rootObject;
- (_Bool)shouldKeepStrongObjectImpl;
@property(readonly, nonatomic) _Bool incompatibleVersion;
@property(readonly, nonatomic) _Bool isStoredOutsideObjectArchive;
- (_Bool)shouldForceCaching;
- (_Bool)isCachingEnabled;
-     // Error parsing type: @52@0:8@16r^{ComponentInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::ComponentExternalReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::ComponentDataReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::ObjectUUIDMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::FeatureInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::ComponentExternalReference>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}QQBBI}24C32Q36@44, name: initWithDelegate:message:packageIdentifier:encodedLength:lastModificationDate:
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(_Bool)arg5 parseVersion:(unsigned long long)arg6 requiredVersion:(unsigned long long)arg7 canBeDropped:(_Bool)arg8 compressionAlgorithm:(long long)arg9 encodedLength:(unsigned long long)arg10 lastModificationDate:(id)arg11;
- (id)init;
-     // Error parsing type: v40@0:8^{ComponentInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::ComponentExternalReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::ComponentDataReference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::ObjectUUIDMapEntry>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::FeatureInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::ComponentExternalReference>=^{Arena}ii^{Rep}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}QQBBI}16Q24r^{WrittenComponentInfo=@@BBB@BBB@@BQQBqQQ@@@@@@}32, name: saveToMessage:saveToken:writtenComponentInfo:

@end

