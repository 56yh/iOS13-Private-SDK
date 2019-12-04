//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


#import <SearchFoundation/_SFPBDynamicURLImageResource-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBDynamicURLImageResource : PBCodable <_SFPBDynamicURLImageResource, NSSecureCoding>
{
    _Bool _supportsResizing;
    _SFPBGraphicalFloat *_pixelWidth;
    _SFPBGraphicalFloat *_pixelHeight;
    NSString *_formatURL;
    NSArray *_imageOptions;
}

@property(copy, nonatomic) NSArray *imageOptions; // @synthesize imageOptions=_imageOptions;
@property(nonatomic) _Bool supportsResizing; // @synthesize supportsResizing=_supportsResizing;
@property(copy, nonatomic) NSString *formatURL; // @synthesize formatURL=_formatURL;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(retain, nonatomic) _SFPBGraphicalFloat *pixelWidth; // @synthesize pixelWidth=_pixelWidth;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)imageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageOptionsCount;
- (void)addImageOptions:(id)arg1;
- (void)clearImageOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

