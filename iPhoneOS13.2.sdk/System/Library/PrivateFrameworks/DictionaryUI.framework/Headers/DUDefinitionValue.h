//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAAsset, NSAttributedString, NSDictionary, NSString;

@interface DUDefinitionValue : NSObject
{
    NSAttributedString *_definition;
    NSString *_longDefinition;
    NSDictionary *_definitionElements;
    NSString *_localizedDictionaryName;
    NSString *_term;
    MAAsset *_rawAsset;
    struct __CFArray *_foundRecordRefs;
}

@property struct __CFArray *foundRecordRefs; // @synthesize foundRecordRefs=_foundRecordRefs;
@property(retain, nonatomic) MAAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly) NSString *term; // @synthesize term=_term;
@property(readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
- (id)description;
- (id)_HTMLDefinitionForType:(long long)arg1;
@property(readonly) NSDictionary *definitionElements; // @synthesize definitionElements=_definitionElements;
@property(readonly) NSString *longDefinition; // @synthesize longDefinition=_longDefinition;
@property(readonly) NSAttributedString *definition; // @synthesize definition=_definition;
- (void)dealloc;
- (id)initWithDefinitionDictionary:(id)arg1 term:(id)arg2;

@end

