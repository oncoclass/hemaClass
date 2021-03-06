#' Read references for RMA normalisation based on reference
#' 
#' Functions to read coefficients for REGS classifiers and predictors.
#' @rdname readReference
#' @aliases 
#'   readReference
#'   readCHEPRETROreference
#'   readLLMPPCHOPreference
#'   readLLMPPRCHOPreference
#'   readIDRCreference
#'   readMDFCIreference
#' @return An object that may be used as an reference.
#' @examples
#' names(readLLMPPCHOPreference())
#' @export
readLLMPPCHOPreference <- function() {
  file <- system.file("extdata/References/LLMPPCHOP.ref.rds", package = "hemaClass")
  return(readRDS(file))
}

#' @rdname readReference
#' @examples
#' names(readLLMPPRCHOPreference())
#' @export
readLLMPPRCHOPreference <- function() {
  file <- system.file("extdata/References/LLMPPRCHOP.ref.rds", package = "hemaClass")
  return(readRDS(file))
}

#' @rdname readReference
#' @examples
#' names(readMDFCIreference())
#' @export
readMDFCIreference <- function() {
  file <- system.file("extdata/References/MDFCI.ref.rds", package = "hemaClass")
  return(readRDS(file))
}

#' @rdname readReference
#' @examples
#' names(readIDRCreference())
#' @export
readIDRCreference <- function() {
  file <- system.file("extdata/References/IDRC.ref.rds", package = "hemaClass")
  return(readRDS(file))
}

#' @rdname readReference
#' @examples
#' names(readCHEPRETROreference())
#' @export
readCHEPRETROreference <- function() {
  file <- system.file("extdata/References/CHEPRETRO.ref.rds", package = "hemaClass")
  return(readRDS(file))
}

#' @rdname readReference
#' @examples
#' names(readUAMSreference())
#' @export
readUAMSreference <- function() {
  file <- system.file("extdata/References/UAMS.ref.rds", package = "hemaClass")
  return(readRDS(file))
}
