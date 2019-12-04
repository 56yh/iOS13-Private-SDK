//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFContentItem <WFContentItemClass>
{
    _Bool _prefersImage;
    NSString *_errorCorrectionLevel;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2;
@property(retain, nonatomic) NSString *errorCorrectionLevel; // @synthesize errorCorrectionLevel=_errorCorrectionLevel;
@property(nonatomic) _Bool prefersImage; // @synthesize prefersImage=_prefersImage;
- (id)preferredFileType;
- (id)preferredObjectType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateImageOfSize:(struct CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) WFMachineReadableCode *codeObject;

@end

