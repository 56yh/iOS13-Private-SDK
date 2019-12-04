//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPReader.h>

#import <iWorkImport/TSPComponentParserDelegate-Protocol.h>

@class NSString;
@protocol TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate>
{
    id <TSUStreamReadChannel> _readChannel;
    struct {
        unsigned int isReadingFromDocument:1;
        unsigned int ignoreUnknownContent:1;
        unsigned int ignoreVersionChecking:1;
        unsigned int hasIncompatibleVersion:1;
        unsigned int acceptUnknownDocumentObject:1;
    } _flags;
}

-     // Error parsing type: @32@0:8r^{ArchiveInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::MessageInfo>=^{Arena}ii^{Rep}}QB}16^{DispatchDataInputStream=^^?@QQ@Q*}24, name: unknownObjectUnarchiverArchiveInfo:stream:
-     // Error parsing type: @32@0:8r^{MessageInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldPath>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i^{FieldPath}III}16^{DispatchDataInputStream=^^?@QQ@Q*}24, name: unknownMessageFromMessageInfo:stream:
-     // Error parsing type: r^{MessageInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldPath>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i^{FieldPath}III}16@0:8, name: unknownObjectMessageInfo
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
-     // Error parsing type: @64@0:8q16r^{MessageInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldInfo>=^{Arena}ii^{Rep}}{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned long long>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i{RepeatedPtrField<TSP::FieldPath>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i^{FieldPath}III}24^{auto_ptr<google::protobuf::Message>=^{Message}}32Q40{auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >=^{unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >}}48@56, name: newUnarchiverWithObjectIdentifier:messageInfo:message:messageVersion:strongReferences:unknownContent:
-     // Error parsing type: @40@0:8r^{ArchiveInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::MessageInfo>=^{Arena}ii^{Rep}}QB}16^{DispatchDataInputStream=^^?@QQ@Q*}24^B32, name: newUnarchiverWithArchiveInfo:stream:isUnknownObject:
-     // Error parsing type: B48@0:8@16r^{ArchiveInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::MessageInfo>=^{Arena}ii^{Rep}}QB}24^{DispatchDataInputStream=^^?@QQ@Q*}32^@40, name: componentParser:didReadArchiveInfo:stream:error:
- (_Bool)shouldProceedParsingOnFailure;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4 ignoreUnknownContent:(_Bool)arg5 ignoreVersionChecking:(_Bool)arg6;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

