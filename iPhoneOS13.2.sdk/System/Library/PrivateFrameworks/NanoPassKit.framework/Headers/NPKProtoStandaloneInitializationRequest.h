//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>



@class NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying>
{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    _Bool _separateLocalDeviceEntryRequired;
    _Bool _useSimulatedFlowController;
    struct {
        unsigned int separateLocalDeviceEntryRequired:1;
        unsigned int useSimulatedFlowController:1;
    } _has;
}

@property(nonatomic) _Bool separateLocalDeviceEntryRequired; // @synthesize separateLocalDeviceEntryRequired=_separateLocalDeviceEntryRequired;
@property(nonatomic) _Bool useSimulatedFlowController; // @synthesize useSimulatedFlowController=_useSimulatedFlowController;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSeparateLocalDeviceEntryRequired;
@property(nonatomic) _Bool hasUseSimulatedFlowController;

@end

