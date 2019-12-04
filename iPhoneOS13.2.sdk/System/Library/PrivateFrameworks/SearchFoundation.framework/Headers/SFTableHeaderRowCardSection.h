//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFTableRowCardSection.h>



#import <SearchFoundation/SFTableHeaderRowCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFTableAlignmentSchema, SFUserReportRequest;

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <SFTableHeaderRowCardSection, NSSecureCoding, NSCopying>
{
    CDStruct_dff33cb6 _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isSubHeader;
    _Bool _reducedRowHeight;
    _Bool _alignRowsToHeader;
    int _separatorStyle;
    int _verticalAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) _Bool reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasAlignRowsToHeader;
- (_Bool)hasVerticalAlign;
- (_Bool)hasReducedRowHeight;
- (_Bool)hasIsSubHeader;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSArray *richData;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end

