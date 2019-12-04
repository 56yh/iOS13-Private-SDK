//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <ActionKit/ONOSearching-Protocol.h>

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter, NSString, ONOXMLElement;

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding>
{
    ONOXMLElement *_rootElement;
    struct _xmlDoc *_xmlDocument;
    NSString *_version;
    unsigned long long _stringEncoding;
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_defaultNamespaces;
}

+ (id)HTMLDocumentWithData:(id)arg1 error:(id *)arg2;
+ (id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
+ (id)XMLDocumentWithData:(id)arg1 error:(id *)arg2;
+ (id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSMutableDictionary *defaultNamespaces; // @synthesize defaultNamespaces=_defaultNamespaces;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) struct _xmlDoc *xmlDocument; // @synthesize xmlDocument=_xmlDocument;
@property(retain, nonatomic) ONOXMLElement *rootElement; // @synthesize rootElement=_rootElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)firstChildWithCSS:(id)arg1;
- (void)enumerateElementsWithCSS:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateElementsWithCSS:(id)arg1 block:(id /* block */)arg2;
- (id)CSS:(id)arg1;
- (id)firstChildWithXPath:(id)arg1;
- (void)enumerateElementsWithXPath:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateElementsWithXPath:(id)arg1 block:(id /* block */)arg2;
- (id)functionResultByEvaluatingXPath:(id)arg1;
- (id)XPath:(id)arg1;
- (id)enumeratorWithXPathObject:(struct _xmlXPathObject *)arg1;
- (id)elementWithNode:(struct _xmlNode *)arg1;
- (void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2;
- (void)dealloc;
- (id)initWithDocument:(struct _xmlDoc *)arg1;

@end

