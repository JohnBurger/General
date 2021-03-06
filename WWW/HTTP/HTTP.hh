//
// HTTP.hh
//

#ifndef HTTP_hh
#define HTTP_hh

#include "../WWW.hh"

namespace WWW {

   namespace HTTP {

      enum Versions {
         Unknown,
         HTTP10,
         HTTP11
      }; // Versions

      // The defined end-of-line for HTTP headers
      extern const String EOL;

      // This header is signficant to Keep-Alive and HTTP/1.1
      extern const String ContentLength;

      // This is the header field for Keep-Alive or Close
      extern const String Connection;
      // ...and these are the values
      extern const String KeepAlive;
      extern const String Close;

      // The necessary Header for 405 MethodNotAllowed
      extern const String Allow;

      // The standard Location header for 303 SeeOther POST replies
      extern const String Location;

      // The standard Cache indicator for content
      extern const String CacheControl;
      extern const String MaxAge;

      Versions Version(const String &version);

      String Version(Versions version);

      class _HTTP_;

      // Commonly called the URL. URI is technically correct.
      class URI;

      // This is just the Request Message Header, consisting of
      //    Request Line
      //    Request Headers
      // The body (if any) is separate
      class Request;

      // This is just the Response Header, consisting of
      //   Response Line
      //   Response Headers
      // The body (if any) is separate
      class Response;

   } // HTTP

} // WWW

class WWW::HTTP::_HTTP_ : private _WWW_ {
}; // _HTTP_

#endif // HTTP_hh
